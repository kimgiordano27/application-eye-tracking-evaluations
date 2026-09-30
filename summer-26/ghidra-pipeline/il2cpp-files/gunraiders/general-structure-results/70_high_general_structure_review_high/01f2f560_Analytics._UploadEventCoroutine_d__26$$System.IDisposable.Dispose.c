/*
FUNCTION_NAME: Analytics.<UploadEventCoroutine>d__26$$System.IDisposable.Dispose
ENTRY_POINT: 01f2f560
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void Analytics_<UploadEventCoroutine>d__26__System_IDisposable_Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_0357b3e0();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)PTR_DAT_042323c8;
    lVar3 = thunk_FUN_01c495e4(lVar2,uVar6);
    puVar1 = double___var;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar2,uVar6);
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar5 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar5) goto LAB_01f2f66c;
        if (*(long *)(unaff_x19 + 0x248) == 0) goto LAB_01f2f668;
        FUN_02fc8120(*(long *)(unaff_x19 + 0x248),*(undefined1 *)(lVar3 + 0x20 + uVar5),
                     *(undefined8 *)puVar1);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    lVar2 = FUN_0357b3e0();
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_0422f930;
      lVar3 = thunk_FUN_01c495e4(lVar2,uVar6);
      puVar1 = System_Enum___var;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar2,uVar6);
      }
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar5 = 0;
        uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar5) {
LAB_01f2f66c:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_01f2f668;
          FUN_02fc8b74(*(long *)(unaff_x19 + 0x250),*(undefined1 *)(lVar3 + 0x20 + uVar5),
                       *(undefined8 *)puVar1);
          uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return;
    }
  }
LAB_01f2f668:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


