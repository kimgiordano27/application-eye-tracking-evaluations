/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$ScalePrefab
ENTRY_POINT: 01468270
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__ScalePrefab
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               ulong param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined4 uVar7;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    FUN_0132138c(param_4,param_5,param_6,param_7);
    *(long **)(unaff_x24 + 0x10) = in_stack_00000010;
    FUN_02667cd8(&stack0x00000010,unaff_x23,0);
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000020;
    uVar7 = FUN_02687a80(&stack0x00000030,0);
    *(undefined4 *)(unaff_x24 + 0x18) = uVar7;
    *(undefined4 *)(unaff_x24 + 0x1c) = param_2;
    *(undefined4 *)(unaff_x24 + 0x20) = param_3;
    FUN_00bbd178();
    do {
      do {
        do {
          do {
            lVar5 = *(long *)(unaff_x21 + 0x10);
            iVar1 = *(int *)(unaff_x21 + 0x18) + 1;
            *(int *)(unaff_x21 + 0x18) = iVar1;
            if (lVar5 == 0) goto LAB_0146839c;
            if (*(int *)(lVar5 + 0x18) <= iVar1) {
              lVar5 = *(long *)(in_stack_00000008 + 0x48);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) = unaff_x22;
                uVar6 = FUN_013f5b78(lVar5,unaff_x27,0);
                if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                  if (*(char *)(*(long *)(in_stack_00000008 + 0x48) + 0x20) == '\0') {
                    FUN_014683a8(uVar6,unaff_x27,(long)&stack0x00000028 + 4,&stack0x00000028,
                                 in_stack_00000008);
                    *(float *)(in_stack_00000008 + 0x50) =
                         fStack000000000000002c +
                         (fStack0000000000000028 - fStack000000000000002c) * DAT_028aa3e0;
                  }
                  return;
                }
              }
              goto LAB_0146839c;
            }
            FUN_0132138c(lVar5,iVar1,&stack0x00000010,*unaff_x25);
            plVar3 = in_stack_00000010;
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar4 = FUN_02681b9c(plVar3,0,0);
          } while ((uVar4 & 1) == 0);
          if (*(long *)(unaff_x21 + 0x20) == 0) {
            lVar5 = thunk_FUN_00d62348(*unaff_x28);
            if (lVar5 == 0) goto LAB_0146839c;
            FUN_0136b58c();
            *(long *)(unaff_x21 + 0x20) = lVar5;
          }
          FUN_01322b20();
        } while (in_stack_00000010 != (long *)0x0);
        if ((*(long *)(unaff_x21 + 0x10) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x21 + 0x10),*(undefined4 *)(unaff_x21 + 0x18),
                         &stack0x00000010,*unaff_x25), in_stack_00000010 == (long *)0x0))
        goto LAB_0146839c;
        FUN_010e58e8(in_stack_00000010,&stack0x00000010,*unaff_x19);
        unaff_x23 = in_stack_00000010;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_02681b9c(unaff_x23,0,0);
      } while (((uVar4 & 1) == 0) || (unaff_x23 == (long *)0x0));
      lVar5 = *unaff_x23;
      bVar2 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((bVar2 <= *(byte *)(lVar5 + 300)) &&
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_033f17f8))
      break;
      bVar2 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                       + 300);
    } while ((*(byte *)(lVar5 + 300) < bVar2) ||
            (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
             *(long *)
              Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__));
    unaff_x24 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_Meta_WitAi_ThreadUtility_<>c__DisplayClass17_0_<Background>b__0__
                                  );
    if (unaff_x24 == 0) {
LAB_0146839c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_013f742c(unaff_x24,0);
    param_4 = *(long *)(unaff_x21 + 0x10);
    if (param_4 == 0) goto LAB_0146839c;
    param_5 = (ulong)*(uint *)(unaff_x21 + 0x18);
    param_7 = *unaff_x25;
    param_6 = &stack0x00000010;
  } while( true );
}


