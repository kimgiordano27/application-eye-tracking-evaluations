/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 03d514b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03d51760) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar7;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    do {
                    /* try { // try from 03d514b8 to 03e514bb has its CatchHandler @ 03d514c0 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03d51478 with catch @ 03d514bc
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03d51488 with catch @ 03d514c0
                       catch(type#1 @ 06e40658) { ... } // from try @ 03d514b8 with catch @ 03d514c0
                        */
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto FUN_03d514ec;
      }
      in_x9 = in_x9 - 1;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 03d51458 with catch @ 03d514c8
                       catch(type#1 @ 06e40658) { ... } // from try @ 03d514a8 with catch @ 03d514c8
                        */
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
                    /* try { // try from 03d514d0 to 03e514d3 has its CatchHandler @ 03d51538 */
                    /* try { // try from 03d514d4 to 03e514f3 has its CatchHandler @ 03d513c4 */
      puVar2 = (undefined8 *)FUN_032937ac();
FUN_03d514ec:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x24 == (long *)0x0) goto LAB_03d51714;
        lVar4 = *unaff_x24;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 == 0)
        goto 
        System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_03d516d4;
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8(lVar4);
      }
      lVar5 = *unaff_x24;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar4) {
            lVar4 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_03d51570;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      lVar4 = FUN_032937ac();
LAB_03d51570:
      *(void **)(unaff_x29 + -0x10) = unaff_x22;
      (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      if (unaff_w27 == 0) {
        memcpy(unaff_x22,unaff_x23,unaff_x21);
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_032934b8();
        }
        FUN_032d5cbc();
      }
      else {
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_032934b8();
        }
        puVar2 = (undefined8 *)thunk_FUN_032cddd4();
        plVar7 = (long *)*puVar2;
        memcpy(unaff_x22,unaff_x23,unaff_x21);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar1 = unaff_w27 - 1;
        if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),
               unaff_x22,unaff_x21);
        lVar4 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
        }
        if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        FUN_032d5c5c(lVar4,(long)plVar7 +
                           (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20);
      }
      unaff_w27 = unaff_w27 + 1;
      param_1 = *unaff_x24;
      param_3 = *unaff_x28;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_03d516d4:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03d51708;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current:
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_03d51708:
  (*(code *)*puVar2)();
LAB_03d51714:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


