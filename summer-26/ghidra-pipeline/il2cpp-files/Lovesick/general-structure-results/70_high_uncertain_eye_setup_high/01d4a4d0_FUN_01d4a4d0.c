/*
FUNCTION_NAME: FUN_01d4a4d0
ENTRY_POINT: 01d4a4d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01d4a4d0(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_68;
  
                    /* try { // try from 01d4a4e0 to 01e4a4e3 has its CatchHandler @ 01d4ab78 */
                    /* try { // try from 01d4a4e4 to 01e4a507 has its CatchHandler @ 01d4ab74 */
  if ((DAT_0377f4f2 & 1) == 0) {
                    /* try { // try from 01d4a508 to 01e4a51b has its CatchHandler @ 01d4ab6c */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
                    /* try { // try from 01d4a524 to 01e4a54f has its CatchHandler @ 01d4abd4 */
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    DAT_0377f4f2 = 1;
  }
  lVar6 = FUN_01d41074(param_1);
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0x18);
    lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,iVar5);
    if (param_2 != 0) {
      uVar3 = FUN_01d55a40(param_2,param_3,0);
      uVar4 = FUN_01d56c38(param_2,uVar3,0);
      puVar1 = OVRPlugin_Hand_TypeInfo;
      iVar5 = iVar5 + -1;
      if (-1 < iVar5) {
        uVar8 = (ulong)iVar5;
        do {
          uVar7 = FUN_01d56d24(param_2,param_3,0);
          if ((uVar7 & 1) == 0) {
LAB_01d4a658:
            if (lVar6 == 0) goto LAB_01d4a6a4;
            bVar2 = *(uint *)(lVar6 + 0x18) <= uVar8;
joined_r0x01d4a664:
            if (bVar2) {
LAB_01d4a67c:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *(undefined4 *)(lVar6 + 0x20 + uVar8 * 4) = 0xffffffff;
          }
          else {
            if ((*(long *)(param_1 + 0x70) == 0) ||
               (FUN_0132138c(*(long *)(param_1 + 0x70),uVar8 & 0xffffffff,&local_68,
                             *(undefined8 *)puVar1), local_68 == 0)) goto LAB_01d4a6a4;
            if ((*(uint *)(local_68 + 0x28) & uVar4) == 0) goto LAB_01d4a658;
            if (((*(long *)(param_1 + 0x70) == 0) ||
                (FUN_0132138c(*(long *)(param_1 + 0x70),uVar8 & 0xffffffff,&local_68,
                              *(undefined8 *)puVar1), local_68 == 0)) ||
               (iVar5 = FUN_01d8bb50(local_68,uVar3,0), lVar6 == 0)) goto LAB_01d4a6a4;
            bVar2 = *(uint *)(lVar6 + 0x18) <= uVar8;
            if (iVar5 < 0) goto joined_r0x01d4a664;
            if (bVar2) goto LAB_01d4a67c;
            *(int *)(lVar6 + 0x20 + uVar8 * 4) = iVar5;
            if ((*(long *)(param_1 + 0x70) == 0) ||
               (FUN_0132138c(*(long *)(param_1 + 0x70),uVar8 & 0xffffffff,&local_68,
                             *(undefined8 *)puVar1), local_68 == 0)) goto LAB_01d4a6a4;
            FUN_01d8bfa8(local_68,iVar5,0);
          }
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      return lVar6;
    }
  }
LAB_01d4a6a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


