/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01f59f38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  long unaff_x20;
  undefined1 *__src;
  ulong __n;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  puVar3 = *(undefined8 **)(param_3 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    thunk_FUN_01ad9084(StringLiteral_2763);
    thunk_FUN_01ad9084(StringLiteral_2214);
    puVar3 = *(undefined8 **)(unaff_x20 + 0x38);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_01ae9ed0();
      puVar3 = *(undefined8 **)(unaff_x20 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(puVar3[4] + 0xfc);
  __src = &stack0x00000000 + -(__n + 0xf & 0x1fffffff0);
  if (*(int *)(*(long *)StringLiteral_2214 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    puVar3 = *(undefined8 **)(unaff_x20 + 0x38);
  }
  plVar2 = (long *)(**(code **)*puVar3)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_2763) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01f5a010;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)StringLiteral_2763,0);
LAB_01f5a010:
  uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((uVar1 & 1) == 0) {
    memset(unaff_x19,0,__n);
  }
  else {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_01f5a09c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ae9f78(plVar2,lVar4,0);
LAB_01f5a09c:
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar2,unaff_x29 + -0x10,__src);
    memcpy(unaff_x19,__src,__n);
    if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    FUN_01b47ef0();
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


