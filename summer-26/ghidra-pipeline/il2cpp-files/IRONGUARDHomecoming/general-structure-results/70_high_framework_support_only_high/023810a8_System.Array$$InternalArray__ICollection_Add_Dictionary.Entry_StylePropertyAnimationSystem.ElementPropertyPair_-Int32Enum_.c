/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Dictionary.Entry<StylePropertyAnimationSystem.ElementPropertyPair,-Int32Enum>>
ENTRY_POINT: 023810a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02381278) */

void System_Array__InternalArray__ICollection_Add<Dictionary_Entry<StylePropertyAnimationSystem_ElementPropertyPair,_Int32Enum>>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
    piVar7 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023810e0;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023810e0:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_02381238;
        lVar4 = *unaff_x19;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 == 0)
        goto 
        System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Rect,_object,_float>>
        ;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_023811f8;
      }
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar6 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            lVar4 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_02381154;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_01ecb238();
LAB_02381154:
      *(void **)(unaff_x29 + -0x18) = unaff_x23;
      (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
      memcpy(unaff_x25,unaff_x23,unaff_x22);
      memcpy(unaff_x24,unaff_x25,unaff_x22);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar1 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
        puVar1 = (undefined8 *)*unaff_x24;
      }
      puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
      uVar3 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
      (*(code *)puVar5[2])(uVar3);
      param_1 = *unaff_x19;
      param_3 = *unaff_x27;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_023811f8:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0238122c;
    }
  }

  System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Rect,_object,_float>>
  :
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0238122c:
  (*(code *)*puVar1)();
LAB_02381238:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


