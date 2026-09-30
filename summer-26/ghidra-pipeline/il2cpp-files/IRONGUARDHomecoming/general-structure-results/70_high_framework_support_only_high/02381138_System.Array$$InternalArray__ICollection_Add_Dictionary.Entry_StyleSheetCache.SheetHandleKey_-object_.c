/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Dictionary.Entry<StyleSheetCache.SheetHandleKey,-object>>
ENTRY_POINT: 02381138
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02381278) */

void System_Array__InternalArray__ICollection_Add<Dictionary_Entry<StyleSheetCache_SheetHandleKey,_object>>
               (void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
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
  
code_r0x02381138:
  lVar1 = FUN_01ecb238();
  do {
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar6 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*(code *)puVar3[2])(uVar2);
    lVar1 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023810e0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_023810e0:
    uVar5 = (*(code *)*puVar6)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02381238;
      lVar1 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 == 0)
      goto 
      System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Rect,_object,_float>>
      ;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44(lVar1);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 == 0) goto code_r0x02381138;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != lVar1) {
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
      if (uVar5 == 0) goto code_r0x02381138;
    }
    lVar1 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0238122c;
    }
  }

  System_Array__InternalArray__ICollection_Add<BaseCompositeField_FieldDescription<Rect,_object,_float>>
  :
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0238122c:
  (*(code *)*puVar6)();
LAB_02381238:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


