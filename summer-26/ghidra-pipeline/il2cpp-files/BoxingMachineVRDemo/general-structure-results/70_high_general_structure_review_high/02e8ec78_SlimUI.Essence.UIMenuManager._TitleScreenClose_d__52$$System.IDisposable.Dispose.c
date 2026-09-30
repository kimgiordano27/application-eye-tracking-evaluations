/*
FUNCTION_NAME: SlimUI.Essence.UIMenuManager.<TitleScreenClose>d__52$$System.IDisposable.Dispose
ENTRY_POINT: 02e8ec78
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void SlimUI_Essence_UIMenuManager_<TitleScreenClose>d__52__System_IDisposable_Dispose(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long *unaff_x23;
  long unaff_x25;
  long *unaff_x27;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_0606ade8();
  if (((unaff_x25 != 0) && (lVar2 = FUN_0606a288(), lVar2 != 0)) &&
     (lVar3 = FUN_06066d44(lVar2,0), lVar3 != 0)) {
    lVar3 = FUN_033f3478(lVar3,*(undefined8 *)PTR_DAT_0675f5b0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x27);
    }
    uVar4 = UnityEngine_Font__add_textureRebuilt(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = FUN_06066d44(lVar2,0);
      if (lVar3 == 0) goto LAB_02e8ef00;
      lVar3 = FUN_033f33ec(lVar3,*(undefined8 *)PTR_DAT_0675f5a8);
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_0675f5f0;
      thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
      FUN_06078c44();
      FUN_06078d20();
      FUN_06076fa4();
      FUN_06078edc();
      FUN_06078c44();
      FUN_06078d20(lVar2,0);
      FUN_06076fa4();
      FUN_06078edc(lVar2,0);
      lVar3 = FUN_06066c74();
      FUN_06078c44();
      if (lVar3 != 0) {
        FUN_06078d20(lVar3,0);
        lVar3 = FUN_06066c74();
        FUN_06076fa4();
        if (lVar3 != 0) {
          FUN_06078edc(lVar3,0);
          FUN_06079544(lVar2);
          lVar2 = FUN_06066c74();
          if (lVar2 != 0) {
            FUN_06079544();
            FUN_06079544();
            if ((*unaff_x23 != 0) && (lVar2 = FUN_06066d44(*unaff_x23,0), lVar2 != 0)) {
              FUN_0606a40c(lVar2,uStack0000000000000008,0);
              lVar2 = FUN_0335bd70();
              if (lVar2 != 0) {
                uVar1 = *(uint *)(lVar2 + 0x18);
                if (0 < (int)uVar1) {
                  uVar5 = 0;
                  do {
                    if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60af0();
                    }
                    lVar3 = *(long *)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
                    if ((lVar3 == 0) || (lVar3 = FUN_06066d44(lVar3,0), lVar3 == 0))
                    goto LAB_02e8ef00;
                    FUN_0606a40c(lVar3,uStack000000000000000c,0);
                    uVar1 = *(uint *)(lVar2 + 0x18);
                    uVar5 = uVar5 + 1;
                  } while ((int)uVar5 < (int)uVar1);
                }
                if (*(int *)(*(long *)PTR_DAT_0675e6c8 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_060ecbc8(uStack0000000000000008,uStack000000000000000c,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02e8ef00:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


