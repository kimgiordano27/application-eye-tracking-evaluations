/*
FUNCTION_NAME: PauseManager.<PostRecenter>d__37$$System.IDisposable.Dispose
ENTRY_POINT: 01cb42d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void PauseManager_<PostRecenter>d__37__System_IDisposable_Dispose(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  undefined8 *puVar6;
  
  FUN_01f88388(0);
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_016b2a58(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < iVar3) {
      FUN_01f87b08(5,0);
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar2) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_01cb43a8;
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x38);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_01cb4390:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          if (-1 < *(int *)(puVar6 + -3)) {
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_01cb4390;
            lVar1 = (long)(int)unaff_w19;
            unaff_w19 = unaff_w19 + 1;
            *(undefined8 *)(unaff_x20 + lVar1 * 8 + 0x20) = *puVar6;
            thunk_FUN_01286abc();
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (uVar2 != uVar5);
      }
      return;
    }
  }
LAB_01cb43a8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


