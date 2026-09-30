/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<Color>
ENTRY_POINT: 022f9b3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022f9da4) */

void Sirenix_Serialization_Serializer__Get<Color>(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long in_x11;
  int iVar9;
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
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_022f9b6c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022f9b6c:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) == 0) {
          iVar9 = 0xb;
          iVar1 = 0xb;
          if (unaff_x24 == (long *)0x0) goto LAB_022f9cf8;
LAB_022f9c98:
          iVar9 = iVar1;
          lVar5 = *unaff_x24;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 == 0) goto LAB_022f9cd0;
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_022f9cb8;
        }
        lVar5 = *(long *)(*(long *)(unaff_x25 + 0x38) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar7 = *unaff_x24;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              lVar5 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
              goto LAB_022f9be0;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        lVar5 = FUN_01ecb238();
LAB_022f9be0:
        *(void **)(unaff_x29 + -0x18) = unaff_x21;
        (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
        memcpy(unaff_x28,unaff_x21,unaff_x20);
        memcpy(unaff_x27,unaff_x28,unaff_x20);
        puVar2 = unaff_x27;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x25 + 0x38) + 0x28) + 0x28)) {
          puVar2 = (undefined8 *)*unaff_x27;
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x25 + 0x38) + 0x30);
        uVar4 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
        (*(code *)puVar6[2])(uVar4);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          memcpy(unaff_x21,unaff_x28,unaff_x20);
          memcpy(unaff_x22,unaff_x21,unaff_x20);
          iVar9 = 10;
          iVar1 = 10;
          if (unaff_x24 != (long *)0x0) goto LAB_022f9c98;
          goto LAB_022f9cf8;
        }
        param_1 = *unaff_x24;
        param_3 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_022f9cb8:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_022f9cec;
    }
  }
LAB_022f9cd0:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022f9cec:
  (*(code *)*puVar2)();
LAB_022f9cf8:
  if (iVar9 == 0xb) {
LAB_022f9d10:
    memset(unaff_x23,0,unaff_x20);
    unaff_x22 = unaff_x23;
  }
  else if (iVar9 != 10) {
    if (iVar9 != 0) goto LAB_022f9d44;
    goto LAB_022f9d10;
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x28),unaff_x21,unaff_x20);
LAB_022f9d44:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


