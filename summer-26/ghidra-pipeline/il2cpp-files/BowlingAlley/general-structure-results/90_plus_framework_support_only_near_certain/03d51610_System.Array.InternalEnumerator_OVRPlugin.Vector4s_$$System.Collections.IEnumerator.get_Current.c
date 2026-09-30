/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03d51610
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03d51760) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
               (void *param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  uint uVar6;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x03d51610:
  memcpy(param_1,param_2,param_3);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  if (*(uint *)(unaff_x25 + 3) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
                    /* catch() { ... } // from try @ 03d51698 with catch @ 03d51658
                       catch() { ... } // from try @ 03d516c4 with catch @ 03d51658
                       catch() { ... } // from try @ 03d516d4 with catch @ 03d51658
                       catch() { ... } // from try @ 03d5172c with catch @ 03d51658
                       catch() { ... } // from try @ 03d5176c with catch @ 03d51658
                       catch() { ... } // from try @ 03d517b8 with catch @ 03d51658 */
  FUN_032d5c5c(lVar2,(long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * unaff_x26 + 0x20);
  uVar6 = unaff_w27;
  do {
    unaff_w27 = uVar6 + 1;
    lVar2 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_03d514ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_032937ac();
FUN_03d514ec:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x24 == (long *)0x0) goto LAB_03d51714;
      lVar2 = *unaff_x24;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0)
      goto 
      System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_03d516d4;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8(lVar2);
    }
    lVar3 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_03d51570;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_032937ac();
LAB_03d51570:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_w27 != 0) break;
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    FUN_032d5cbc();
    uVar6 = unaff_w27;
  } while( true );
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  puVar1 = (undefined8 *)thunk_FUN_032cddd4();
  unaff_x25 = (long *)*puVar1;
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(uint *)(unaff_x25 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  unaff_x26 = (long)(int)uVar6;
  param_1 = (void *)((long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * unaff_x26 + 0x20);
  param_2 = unaff_x22;
  param_3 = unaff_x21;
  goto code_r0x03d51610;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03d516d4:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03d51708;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current:
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_03d51708:
  (*(code *)*puVar1)();
LAB_03d51714:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


