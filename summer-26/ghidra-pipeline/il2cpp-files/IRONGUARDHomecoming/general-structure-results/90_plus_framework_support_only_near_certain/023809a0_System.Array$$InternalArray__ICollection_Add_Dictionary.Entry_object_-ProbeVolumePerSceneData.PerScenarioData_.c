/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<Dictionary.Entry<object,-ProbeVolumePerSceneData.PerScenarioData>>
ENTRY_POINT: 023809a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02380aac) */

void System_Array__InternalArray__ICollection_Add<Dictionary_Entry<object,_ProbeVolumePerSceneData_PerScenarioData>>
               (code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    (*param_1)(param_2);
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x20) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x25;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x30);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
    (*(code *)puVar2[2])(uVar1);
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02380914;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02380914:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02380a68;
      lVar4 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_02380a40;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02380988;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_02380988:
    *(void **)(unaff_x29 + -0x10) = unaff_x24;
    param_2 = *(undefined8 *)(*(long *)(lVar4 + 8) + 8);
    param_1 = *(code **)(*(long *)(lVar4 + 8) + 0x10);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02380a5c;
    }
  }
LAB_02380a40:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02380a5c:
  (*(code *)*puVar3)();
LAB_02380a68:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


