/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry2
ENTRY_POINT: 01d7f958
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryGeometry2
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,int param_7,uint param_8,undefined8 param_9,
               undefined8 *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14,undefined8 param_15,char param_16)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  long *plVar8;
  ulong uVar9;
  char cStack0000000000000034;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359050);
    FUN_00fdc2e4(PTR_DAT_02359058);
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    *(undefined1 *)(unaff_x21 + 0x7d7) = 1;
  }
  cStack0000000000000034 = '\0';
  param_16 = '\0';
  param_15._4_4_ = 0;
  param_12 = 0;
  param_13 = 0;
  param_14 = 0;
  if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7f060(param_4,&stack0x00000038,param_8 & 1,&stack0x00000034,&param_16,
               (undefined1 *)((long)register0x00000008 + 0x2c));
                    /* try { // try from 01d7fa00 to 01e7fa3f has its CatchHandler @ 01d7fa00
                       catch() { ... } // from try @ 01d7fa00 with catch @ 01d7fa00
                       catch() { ... } // from try @ 01d7fa4c with catch @ 01d7fa00
                       catch() { ... } // from try @ 01d7fa7c with catch @ 01d7fa00
                       catch() { ... } // from try @ 01d7fab8 with catch @ 01d7fa00 */
  lVar5 = FUN_01d7fb8c(param_2,uStack0000000000000038,param_4,param_15._4_4_,param_2);
  if (lVar5 != 0) {
    FUN_0174876c(&param_12,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_02359058);
    cVar2 = cStack0000000000000034;
    cVar1 = param_16;
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar8 = *(long **)(lVar5 + 0x20 + uVar9 * 8);
        if (param_7 == -1) {
LAB_01d7fabc:
          if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar7 = FUN_01d7f588(plVar8,param_4,param_5,param_6);
          uVar3 = uStack0000000000000038;
          if ((uVar7 & 1) != 0) {
            if (cVar2 != '\0') {
              if (*(int *)(*(long *)PTR_DAT_0234bce0 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              uVar7 = FUN_01d7f224(plVar8,uVar3,cVar1 != '\0');
              if ((uVar7 & 1) == 0) goto LAB_01d7fb40;
            }
            FUN_0174899c(&param_12,plVar8,*(undefined8 *)PTR_DAT_02359050);
          }
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_01d7fb88;
          bVar4 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
          if ((param_7 == 0 & bVar4) != (param_7 < 1 | bVar4 & 1)) {
            lVar6 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
            if (lVar6 == 0) goto LAB_01d7fb88;
            if (*(int *)(lVar6 + 0x18) == param_7) goto LAB_01d7fabc;
          }
        }
LAB_01d7fb40:
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    param_10[2] = param_14;
    param_10[1] = param_13;
    *param_10 = param_12;
    return;
  }
LAB_01d7fb88:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


