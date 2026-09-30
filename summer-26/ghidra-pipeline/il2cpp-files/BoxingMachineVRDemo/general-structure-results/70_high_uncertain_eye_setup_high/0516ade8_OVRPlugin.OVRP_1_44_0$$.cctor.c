/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$.cctor
ENTRY_POINT: 0516ade8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516affc) */
/* WARNING: Removing unreachable block (ram,0x0516b034) */

int OVRPlugin_OVRP_1_44_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long lVar9;
  int iVar10;
  
  puVar2 = PTR_DAT_067827b0;
  puVar1 = PTR_DAT_0675f3d8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* catch() { ... } // from try @ 0516addc with catch @ 0516adec */
                    /* try { // try from 0516adf8 to 0526ae0b has its CatchHandler @ 0516ae60 */
  lVar9 = 0;
  iVar10 = 4;
  do {
    lVar6 = *unaff_x21;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516ad00 with catch @ 0516ae0c
                       try { // try from 0516ae0c to 0526ae27 has its CatchHandler @ 0516acb8 */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516ad10 with catch @ 0516ae10
                        */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    /* try { // try from 0516ae44 to 0526ae4b has its CatchHandler @ 0516ae60 */
                    /* try { // try from 0516ae4c to 0526ae57 has its CatchHandler @ 0516acb8 */
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0516ae50;
        }
                    /* try { // try from 0516ae28 to 0526ae2b has its CatchHandler @ 0516ae38 */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* catch() { ... } // from try @ 0516ae28 with catch @ 0516ae38 */
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516ae50:
                    /* try { // try from 0516ae58 to 0526ae5f has its CatchHandler @ 0516ae60 */
    uVar7 = (*(code *)*puVar5)();
    if ((uVar7 & 1) == 0) break;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0516adf8 with catch @ 0516ae60
                       catch(type#2 @ 00000000) { ... } // from try @ 0516ae44 with catch @ 0516ae60
                       catch(type#2 @ 00000000) { ... } // from try @ 0516ae58 with catch @ 0516ae60
                        */
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0516aeac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516aeac:
    (*(code *)*puVar5)();
    iVar3 = FUN_050ea8a4(lVar9,0);
    iVar4 = FUN_0516aa08();
    iVar10 = iVar4 + iVar10 + iVar3 + 2;
    lVar9 = lVar9 + 1;
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar9 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0516afe4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516afe4:
    (*(code *)*puVar5)();
  }
  *(int *)(unaff_x19 + 0x18) = iVar10 + 1;
  return iVar10 + 1;
}


