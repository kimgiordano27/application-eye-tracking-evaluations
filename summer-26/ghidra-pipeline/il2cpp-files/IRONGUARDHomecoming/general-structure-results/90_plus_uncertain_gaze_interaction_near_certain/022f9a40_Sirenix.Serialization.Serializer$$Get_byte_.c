/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<byte>
ENTRY_POINT: 022f9a40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 200
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022f9da4) */

void Sirenix_Serialization_Serializer__Get<byte>(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  long *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *__s;
  long unaff_x23;
  void *__s_00;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *puVar12;
  void *__s_01;
  long unaff_x29;
  
  puVar12 = (undefined8 *)(param_1 - unaff_x23);
  __s_01 = (void *)((long)puVar12 - unaff_x23);
  memset(__s_01,0,unaff_x20);
  __s = (void *)((long)__s_01 - unaff_x23);
  memset(__s,0,unaff_x20);
  __s_00 = (void *)((long)__s - unaff_x23);
  memset(__s_00,0,unaff_x20);
  puVar4 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  if ((unaff_x24 == (long *)0x0) ||
     (puVar4 = Method_UnityEngine_CanvasRenderer_SetColor__, unaff_x26 == 0)) {
    uVar3 = thunk_FUN_01efb3a4(puVar4);
    FUN_03971094(uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  lVar5 = *unaff_x19;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar7 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar1 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_022f9b04;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022f9b04:
  plVar2 = (long *)(*(code *)*puVar1)();
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022f9b6c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar4,0);
LAB_022f9b6c:
    uVar8 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar8 & 1) == 0) {
      iVar11 = 0xb;
      iVar10 = 0xb;
      goto joined_r0x022f9c94;
    }
    lVar5 = *(long *)(*(long *)(unaff_x25 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          lVar5 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_022f9be0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_01ecb238(plVar2,lVar5,0);
LAB_022f9be0:
    *(void **)(unaff_x29 + -0x18) = unaff_x21;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar2,unaff_x29 + -0x18);
    memcpy(__s_01,unaff_x21,unaff_x20);
    memcpy(puVar12,__s_01,unaff_x20);
    puVar1 = puVar12;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x25 + 0x38) + 0x28) + 0x28)) {
      puVar1 = (undefined8 *)*puVar12;
    }
    puVar6 = *(undefined8 **)(*(long *)(unaff_x25 + 0x38) + 0x30);
    uVar3 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*(code *)puVar6[2])(uVar3);
  } while (*(char *)(unaff_x29 + -0xc) == '\0');
  memcpy(unaff_x21,__s_01,unaff_x20);
  memcpy(__s,unaff_x21,unaff_x20);
  iVar11 = 10;
  iVar10 = 10;
joined_r0x022f9c94:
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022f9cec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar2,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_022f9cec:
    (*(code *)*puVar12)(plVar2,puVar12[1]);
    iVar10 = iVar11;
  }
  if (iVar10 == 0xb) {
LAB_022f9d10:
    memset(__s_00,0,unaff_x20);
    __s = __s_00;
  }
  else if (iVar10 != 10) {
    if (iVar10 != 0) goto LAB_022f9d44;
    goto LAB_022f9d10;
  }
  memcpy(unaff_x21,__s,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x28),unaff_x21,unaff_x20);
LAB_022f9d44:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


