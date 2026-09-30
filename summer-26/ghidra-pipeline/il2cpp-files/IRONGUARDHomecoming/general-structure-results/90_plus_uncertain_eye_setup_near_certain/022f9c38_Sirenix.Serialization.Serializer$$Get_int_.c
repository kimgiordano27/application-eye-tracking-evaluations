/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<int>
ENTRY_POINT: 022f9c38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022f9da4) */

void Sirenix_Serialization_Serializer__Get<int>(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x9;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    uVar1 = *param_2;
    *(undefined8 **)(unaff_x29 + -0x18) = in_x9;
    (*(code *)param_2[2])(uVar1);
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    lVar4 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x19) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_022f9b6c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022f9b6c:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      iVar8 = 0xb;
      iVar7 = 0xb;
      goto joined_r0x022f9c84;
    }
    lVar4 = *(long *)(*(long *)(unaff_x25 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar3 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          lVar4 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_022f9be0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_022f9be0:
    *(void **)(unaff_x29 + -0x18) = unaff_x21;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    memcpy(unaff_x28,unaff_x21,unaff_x20);
    memcpy(unaff_x27,unaff_x28,unaff_x20);
    in_x9 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x25 + 0x38) + 0x28) + 0x28)) {
      in_x9 = (undefined8 *)*unaff_x27;
    }
    param_2 = *(undefined8 **)(*(long *)(unaff_x25 + 0x38) + 0x30);
  }
  memcpy(unaff_x21,unaff_x28,unaff_x20);
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  iVar8 = 10;
  iVar7 = 10;
joined_r0x022f9c84:
  if (unaff_x24 != (long *)0x0) {
    lVar4 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_022f9cec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022f9cec:
    (*(code *)*puVar2)();
    iVar7 = iVar8;
  }
  if (iVar7 == 0xb) {
LAB_022f9d10:
    memset(unaff_x23,0,unaff_x20);
    unaff_x22 = unaff_x23;
  }
  else if (iVar7 != 10) {
    if (iVar7 != 0) goto LAB_022f9d44;
    goto LAB_022f9d10;
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x28),unaff_x21,unaff_x20);
LAB_022f9d44:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


