/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 04597e5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  
code_r0x04597e5c:
  uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
  do {
    iVar3 = (int)uVar4;
    uVar6 = (uint)unaff_x22;
    if ((int)uVar6 < iVar3) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) {
LAB_04597ef4:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w21)) {
LAB_04597ef8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
                    /* try { // try from 04597e84 to 04697ecb has its CatchHandler @ 04597e84
                       catch() { ... } // from try @ 04597e84 with catch @ 04597e84
                       catch() { ... } // from try @ 04597f30 with catch @ 04597e84
                       catch() { ... } // from try @ 04597f60 with catch @ 04597e84
                       catch() { ... } // from try @ 04597fdc with catch @ 04597e84 */
      puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
      uVar8 = *puVar2;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w21 * 0x10);
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
      unaff_w21 = unaff_w21 + 1;
      thunk_FUN_03048534(puVar1 + 1,0);
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = (ulong)(uVar6 + 1);
    }
    if (iVar3 <= (int)unaff_x22) {
                    /* try { // try from 04597ecc to 04697f2f has its CatchHandler @ 04597f30 */
      FUN_05b11f04(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
      iVar3 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar3 - unaff_w21;
    }
    uVar7 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
    unaff_x22 = (ulong)(int)unaff_x22;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_04597ef4;
      if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_04597ef8;
      if (unaff_x20 == 0) goto LAB_04597ef4;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar7 + 0x20),
                         *(undefined8 *)(lVar5 + uVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) == 0) goto code_r0x04597e5c;
      uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      uVar7 = uVar7 + 0x10;
    } while ((long)unaff_x22 < (long)uVar4);
  } while( true );
}


