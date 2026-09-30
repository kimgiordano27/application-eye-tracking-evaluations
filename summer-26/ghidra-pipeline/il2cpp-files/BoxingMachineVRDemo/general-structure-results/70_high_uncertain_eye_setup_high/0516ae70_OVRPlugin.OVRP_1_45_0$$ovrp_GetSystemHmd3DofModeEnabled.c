/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_GetSystemHmd3DofModeEnabled
ENTRY_POINT: 0516ae70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0516affc) */
/* WARNING: Removing unreachable block (ram,0x0516b034) */

int OVRPlugin_OVRP_1_45_0__ovrp_GetSystemHmd3DofModeEnabled
              (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0516ae04;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516ae04:
      (*(code *)*puVar3)();
                    /* try { // try from 0516aeb8 to 0526b0af has its CatchHandler @ 0516aeb8
                       catch() { ... } // from try @ 0516aeb8 with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b17c with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b210 with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b250 with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b2c8 with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b34c with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b368 with catch @ 0516aeb8
                       catch() { ... } // from try @ 0516b3a4 with catch @ 0516aeb8 */
      iVar1 = FUN_050ea8a4(unaff_x22,0);
      iVar2 = FUN_0516aa08();
      unaff_w24 = iVar2 + unaff_w24 + iVar1 + 2;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0516ae50;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516ae50:
      uVar5 = (*(code *)*puVar3)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto OVRPlugin_OVRP_1_46_0__ovrp_SetTiledMultiResDynamic;
        lVar4 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_0516af2c;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0516af14;
      }
      param_1 = *unaff_x21;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0516af14:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0516afe4;
    }
  }
LAB_0516af2c:
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516afe4:
  (*(code *)*puVar3)();
OVRPlugin_OVRP_1_46_0__ovrp_SetTiledMultiResDynamic:
  *(int *)(unaff_x19 + 0x18) = unaff_w24 + 1;
  return unaff_w24 + 1;
}


