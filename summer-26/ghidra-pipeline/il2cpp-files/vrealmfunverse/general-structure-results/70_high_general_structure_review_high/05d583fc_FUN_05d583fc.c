/*
FUNCTION_NAME: FUN_05d583fc
ENTRY_POINT: 05d583fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05d583fc(long param_1,long param_2,long param_3)

{
  char cVar1;
  double dVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  if ((DAT_066db8a9 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
                    /* try { // try from 05d58458 to 05e584b3 has its CatchHandler @ 05d58458
                       catch() { ... } // from try @ 05d58458 with catch @ 05d58458
                       catch() { ... } // from try @ 05d5856c with catch @ 05d58458
                       catch() { ... } // from try @ 05d585a0 with catch @ 05d58458 */
    FUN_02b3c81c(Method_RootMotion_FinalIK_TwistRelaxer_OnPostUpdate__);
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_IsCOMObjectImpl__);
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_IsDefined__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCancelEvent>__
                );
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_IsPointerImpl__);
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_IsPrimitiveImpl__);
    FUN_02b3c81c(Method_System_Reflection_Emit_TypeBuilder_get_Assembly__);
                    /* try { // try from 05d584b4 to 05e584d3 has its CatchHandler @ 05d58584 */
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                );
    DAT_066db8a9 = 1;
  }
  local_68 = 0;
  if (param_2 == 0) goto LAB_05d5895c;
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* try { // try from 05d584e8 to 05e584f3 has its CatchHandler @ 05d58580 */
  uVar6 = FUN_05c8e378(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 05d584f8 to 05e58503 has its CatchHandler @ 05d5857c */
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
                    /* try { // try from 05d58510 to 05e5853b has its CatchHandler @ 05d58588 */
    FUN_05c41e34(*(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_IsPointerImpl__,0);
    return;
  }
  if (param_3 != 0) {
                    /* try { // try from 05d58550 to 05e5856b has its CatchHandler @ 05d5858c */
    FUN_05d80164(param_3,0);
  }
                    /* try { // try from 05d5856c to 05e5859b has its CatchHandler @ 05d58458 */
  if (((0 < *(int *)(param_2 + 0x7c)) && (lVar8 = *(long *)(param_1 + 0x20), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x18) != 0)) {
    if ((int)*(long *)(lVar8 + 0x18) == 0) {
LAB_05d58960:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (*(int *)(lVar8 + 0x24) != 0) {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d584f8 with catch @ 05d5857c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d584e8 with catch @ 05d58580
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d584b4 with catch @ 05d58584
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d58510 with catch @ 05d58588
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d58550 with catch @ 05d5858c
                        */
      FUN_05d58a5c(param_1,param_3,param_2,(long)&local_68 + 4,&local_68);
                    /* try { // try from 05d5859c to 05e5859f has its CatchHandler @ 05d585ac */
                    /* try { // try from 05d585a0 to 05e585b3 has its CatchHandler @ 05d58458 */
      if (*(int *)(param_1 + 0x15b4) <= *(int *)(param_1 + 0x15b0)) {
                    /* catch() { ... } // from try @ 05d5859c with catch @ 05d585ac */
        uVar10 = FUN_04d78c14(param_1 + 0x15b0,0);
                    /* try { // try from 05d585b4 to 05e585bb has its CatchHandler @ 05d585bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d585b4 with catch @ 05d585bc
                        */
        uVar7 = FUN_04d8dfe8(param_1 + 0xec,0);
        uVar10 = FUN_04c0ab28(*(undefined8 *)
                               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                              ,uVar10,*(undefined8 *)
                                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCancelEvent>__
                              ,uVar7,0);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
        }
        FUN_05c44914(uVar10,0);
      }
      puVar5 = PTR_DAT_06313048;
      if ((*(int *)(param_1 + 0x334) == 0) ||
         ((*(int *)(param_1 + 0x334) == 1 && (local_68._4_4_ == 3)))) {
        if (param_3 != 0) {
          FUN_05d801b8(param_3,1,0);
          return;
        }
        goto LAB_05d5895c;
      }
      if ((*(char *)(param_1 + 0xf4) != '\0') &&
         (*(char *)(*(long *)(*(long *)Method_RootMotion_FinalIK_TwistRelaxer_OnPostUpdate__ + 0xb8)
                   + 0x18) != '\0')) {
        fVar12 = *(float *)(param_2 + 0x38);
        lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
        puVar4 = PTR_DAT_06312310;
                    /* try { // try from 05d586c8 to 05e58723 has its CatchHandler @ 05d586c8
                       catch() { ... } // from try @ 05d586c8 with catch @ 05d586c8
                       catch() { ... } // from try @ 05d587dc with catch @ 05d586c8
                       catch() { ... } // from try @ 05d58810 with catch @ 05d586c8 */
        local_6c = *(undefined4 *)(param_2 + 0x38);
        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(PTR_DAT_06312310 + 0x78),&local_6c);
        fVar3 = DAT_01032518;
        if (lVar8 == 0) goto LAB_05d5895c;
        fVar11 = fVar12 + DAT_01032518;
        FUN_0275a400(lVar8,uVar10);
        FUN_0275a434(lVar8,0,uVar10);
                    /* try { // try from 05d58724 to 05e58743 has its CatchHandler @ 05d587f4 */
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        dVar2 = DAT_01030458;
                    /* try { // try from 05d58758 to 05e58763 has its CatchHandler @ 05d587f0 */
        FUN_05c4594c((double)ABS(fVar12 - (float)(int)fVar11) < DAT_01030458,
                     *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_IsCOMObjectImpl__,
                     lVar8,0);
        fVar12 = *(float *)(param_2 + 0x3c);
                    /* try { // try from 05d58768 to 05e58773 has its CatchHandler @ 05d587ec */
        cVar1 = *(char *)(param_1 + 0xf4);
        lVar8 = FUN_02b3c908(*(undefined8 *)puVar5,1);
        local_70 = *(undefined4 *)(param_2 + 0x3c);
                    /* try { // try from 05d58780 to 05e587ab has its CatchHandler @ 05d587f8 */
        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(puVar4 + 0x78),&local_70);
        if (lVar8 == 0) goto LAB_05d5895c;
        fVar11 = fVar12;
        if (cVar1 != '\0') {
          fVar11 = (float)(int)(fVar12 + fVar3);
        }
        FUN_0275a400(lVar8,uVar10);
                    /* try { // try from 05d587c0 to 05e587db has its CatchHandler @ 05d587fc */
        FUN_0275a434(lVar8,0,uVar10);
                    /* try { // try from 05d587dc to 05e5880b has its CatchHandler @ 05d586c8 */
        FUN_05c4594c((double)ABS(fVar12 - fVar11) < dVar2,
                     *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_IsDefined__,lVar8,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d58768 with catch @ 05d587ec
                        */
        fVar12 = *(float *)(param_2 + 0x40);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d58758 with catch @ 05d587f0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d58724 with catch @ 05d587f4
                        */
        cVar1 = *(char *)(param_1 + 0xf4);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d58780 with catch @ 05d587f8
                        */
        lVar8 = FUN_02b3c908(*(undefined8 *)puVar5,1);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d587c0 with catch @ 05d587fc
                        */
        local_74 = *(undefined4 *)(param_2 + 0x40);
                    /* try { // try from 05d5880c to 05e5880f has its CatchHandler @ 05d5881c */
                    /* try { // try from 05d58810 to 05e58823 has its CatchHandler @ 05d586c8 */
        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(puVar4 + 0x78),&local_74);
        if (lVar8 == 0) goto LAB_05d5895c;
                    /* catch() { ... } // from try @ 05d5880c with catch @ 05d5881c */
                    /* try { // try from 05d58824 to 05e5882b has its CatchHandler @ 05d5882c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d58824 with catch @ 05d5882c
                        */
        fVar11 = fVar12;
        if (cVar1 != '\0') {
          fVar11 = (float)(int)(fVar12 + fVar3);
        }
        FUN_0275a400(lVar8,uVar10);
        FUN_0275a434(lVar8,0,uVar10);
                    /* try { // try from 05d5886c to 05e588c7 has its CatchHandler @ 05d5886c
                       catch() { ... } // from try @ 05d5886c with catch @ 05d5886c
                       catch() { ... } // from try @ 05d58980 with catch @ 05d5886c
                       catch() { ... } // from try @ 05d589b4 with catch @ 05d5886c */
        FUN_05c4594c((double)ABS(fVar12 - fVar11) < dVar2,
                     *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_get_Assembly__,lVar8,0
                    );
        fVar12 = *(float *)(param_2 + 0x44);
        cVar1 = *(char *)(param_1 + 0xf4);
        lVar8 = FUN_02b3c908(*(undefined8 *)puVar5,1);
        local_78 = *(undefined4 *)(param_2 + 0x44);
        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                           (*(undefined8 *)(puVar4 + 0x78),&local_78);
        if (lVar8 == 0) goto LAB_05d5895c;
        fVar11 = fVar12;
        if (cVar1 != '\0') {
          fVar11 = (float)(int)(fVar12 + fVar3);
        }
        FUN_0275a400(lVar8,uVar10);
                    /* try { // try from 05d588c8 to 05e588e7 has its CatchHandler @ 05d58998 */
        FUN_0275a434(lVar8,0,uVar10);
        FUN_05c4594c((double)ABS(fVar12 - fVar11) < dVar2,
                     *(undefined8 *)Method_System_Reflection_Emit_TypeBuilder_IsPrimitiveImpl__,
                     lVar8,0);
      }
                    /* try { // try from 05d588fc to 05e58907 has its CatchHandler @ 05d58994 */
      FUN_05d5d178(local_68 & 0xffffffff,param_1,param_3,param_2);
                    /* try { // try from 05d5890c to 05e58917 has its CatchHandler @ 05d58990 */
      if (param_3 != 0) {
        if (*(int *)(param_3 + 0x28) < 2) {
          return;
        }
        uVar6 = 1;
        lVar8 = 0x48;
                    /* try { // try from 05d58924 to 05e5894f has its CatchHandler @ 05d5899c */
        while (lVar9 = *(long *)(param_3 + 0x50), lVar9 != 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_05d58960;
          FUN_05d4b2d0(lVar9 + lVar8,0);
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0x28;
          if ((long)*(int *)(param_3 + 0x28) <= (long)uVar6) {
            return;
          }
        }
      }
      goto LAB_05d5895c;
    }
  }
  if (param_3 != 0) {
    FUN_05d801b8(param_3,1,0);
    *(undefined8 *)(param_1 + 0x60) = 0;
    return;
  }
LAB_05d5895c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


