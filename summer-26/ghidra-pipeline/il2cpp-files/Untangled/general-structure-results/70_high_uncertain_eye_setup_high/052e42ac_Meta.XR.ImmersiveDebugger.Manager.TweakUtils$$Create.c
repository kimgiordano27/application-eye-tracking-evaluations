/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Create
ENTRY_POINT: 052e42ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Create(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar1 = FUN_0528cb7c();
  uVar3 = in_stack_00000018;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0xb4) != '\0') {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(uVar3,0);
                    /* try { // try from 052e42dc to 053e433b has its CatchHandler @ 052e4400 */
      if ((uVar2 & 1) == 0) {
        uVar3 = FUN_06741378();
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x22);
        }
        uVar2 = FUN_066cd30c(uVar3,0);
        if ((uVar2 & 1) != 0) {
          lVar1 = FUN_06741378();
          if (lVar1 == 0) goto LAB_052e441c;
          FUN_037f26f8(lVar1,&stack0x00000018,*unaff_x23);
        }
      }
    }
    lVar1 = FUN_0528cb7c(0);
    uVar3 = in_stack_00000018;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0xb5) != '\0') {
                    /* try { // try from 052e4350 to 053e435f has its CatchHandler @ 052e43f8 */
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
                    /* try { // try from 052e4360 to 053e43e7 has its CatchHandler @ 052e4190 */
        uVar2 = FUN_066cd30c(uVar3,0);
        if ((uVar2 & 1) == 0) {
          in_stack_00000018 = FUN_037f1cb8();
        }
      }
      uVar3 = in_stack_00000018;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(uVar3,0);
      if ((uVar2 & 1) != 0) {
        if (unaff_x19[0x11] == 0) goto LAB_052e441c;
        uVar2 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                          (unaff_x19[0x11],in_stack_00000018,&stack0x00000008,
                           *(undefined8 *)PTR_DAT_06d3da70);
        if ((uVar2 & 1) != 0) {
          if (in_stack_00000008 == 0) goto LAB_052e441c;
          FUN_05241f40();
        }
                    /* try { // try from 052e43e8 to 053e43eb has its CatchHandler @ 052e43f4 */
                    /* try { // try from 052e43ec to 053e4417 has its CatchHandler @ 052e4190 */
        if ((in_stack_00000008 == 0) || (*(int *)(in_stack_00000008 + 0x20) == 0)) {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052e43e8 with catch @ 052e43f4
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052e4350 with catch @ 052e43f8
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052e4298 with catch @ 052e43fc
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052e42dc with catch @ 052e4400
                        */
          (**(code **)(*unaff_x19 + 0x198))();
        }
      }
                    /* try { // try from 052e4418 to 053e441b has its CatchHandler @ 052e4430 */
      return;
    }
  }
LAB_052e441c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


