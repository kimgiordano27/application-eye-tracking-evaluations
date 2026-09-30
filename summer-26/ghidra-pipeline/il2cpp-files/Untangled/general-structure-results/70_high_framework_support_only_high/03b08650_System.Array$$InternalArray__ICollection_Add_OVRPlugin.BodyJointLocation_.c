/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 03b08650
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__ICollection_Add<OVRPlugin_BodyJointLocation>
              (undefined8 *param_1,int param_2,undefined8 ****param_3,long param_4)

{
  undefined8 ****__src;
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *__s;
  ulong __n;
  ulong __n_00;
  void *__src_00;
  int iVar7;
  undefined8 *__dest;
  long alStack_50 [2];
  undefined8 *puStack_40;
  int iStack_34;
  undefined8 ***pppuStack_30;
  undefined8 *puStack_28;
  int *piStack_20;
  void *pvStack_18;
  int iStack_c;
  long lStack_8;
  
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03b08648 with catch @ 03b08654
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03b08580 with catch @ 03b08658
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03b084b8 with catch @ 03b0865c
                        */
  alStack_50[1] = tpidr_el0;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03b084f8 with catch @ 03b08660
                        */
  lStack_8 = *(long *)(alStack_50[1] + 0x28);
                    /* try { // try from 03b08678 to 03c0867b has its CatchHandler @ 03b08688 */
  lVar4 = *(long *)(param_4 + 0x38);
  puStack_40 = param_1;
  iStack_34 = param_2;
  pppuStack_30 = param_3;
  if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 03b08678 with catch @ 03b08688 */
    FUN_02eea7c4(param_4);
    lVar4 = *(long *)(param_4 + 0x38);
  }
  uVar3 = *(uint *)(*(long *)(lVar4 + 8) + 0xfc);
  __n = (ulong)uVar3;
  __n_00 = (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + 0xfc);
  if ((*(byte *)(*(long *)(lVar4 + 8) + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768();
    uVar3 = *(uint *)(lVar4 + 0xfc);
  }
  lVar4 = (long)alStack_50 - ((ulong)(uVar3 + 0x10) + 0xf & 0x1fffffff0);
  uVar5 = __n + 0xf & 0x1fffffff0;
  __src_00 = (void *)(lVar4 - uVar5);
  __dest = (undefined8 *)((long)__src_00 - (__n_00 + 0xf & 0x1fffffff0));
  __s = (void *)((long)__dest - uVar5);
  memset(__s,0,__n);
  if (iStack_34 != 0) {
    iVar7 = 0;
    do {
      puVar2 = (undefined8 *)**(undefined8 **)(param_4 + 0x38);
      piStack_20 = &iStack_c;
      puStack_28 = puStack_40;
      pvStack_18 = __src_00;
      iStack_c = iVar7;
      (*(code *)puVar2[2])(*puVar2,puVar2,0,&puStack_28,__src_00);
      memcpy(__s,__src_00,__n);
      lVar6 = *(long *)(param_4 + 0x38);
      __src = param_3;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
        __src = &pppuStack_30;
      }
      memcpy(__dest,__src,__n_00);
      lVar1 = *(long *)(lVar6 + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02eea768();
        lVar6 = *(long *)(param_4 + 0x38);
      }
      puStack_28 = __dest;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
        puStack_28 = (undefined8 *)*__dest;
      }
      FUN_02f08988(lVar1,*(undefined8 *)(lVar6 + 0x20),lVar4,__s,&puStack_28,&iStack_c);
      if ((char)iStack_c != '\0') goto LAB_03b087e0;
      iVar7 = iVar7 + 1;
    } while (iStack_34 != iVar7);
  }
  iVar7 = -1;
LAB_03b087e0:
  if (*(long *)(alStack_50[1] + 0x28) == lStack_8) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


