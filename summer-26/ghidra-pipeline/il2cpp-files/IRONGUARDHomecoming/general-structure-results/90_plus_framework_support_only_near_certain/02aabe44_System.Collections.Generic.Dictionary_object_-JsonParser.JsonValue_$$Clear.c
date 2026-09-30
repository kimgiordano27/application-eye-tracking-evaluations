/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-JsonParser.JsonValue>$$Clear
ENTRY_POINT: 02aabe44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 System_Collections_Generic_Dictionary<object,_JsonParser_JsonValue>__Clear(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar10;
  long unaff_x25;
  long unaff_x29;
  
  FUN_01bc52e4();
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x28),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) +
                                                   0xc0) + 0x80) + 0xa0);
  plVar10 = (long *)*puVar2;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x30);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aabed8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(plVar10,lVar4,0);
LAB_02aabed8:
  uVar3 = (*(code *)*puVar2)(plVar10,puVar2[1]);
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x28),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x80)
               + 0x140,uVar3);
  FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x28),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x80),
               0xfffffffc);
  puVar2 = (undefined8 *)
           thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x28),
                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) +
                                                   0xc0) + 0x80) + 0x120);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar10 = (long *)*puVar2;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02aabf98;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_02aabf98:
  uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
  if ((uVar7 & 1) != 0) {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x28),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20)
                                                     + 0xc0) + 0x80) + 0x140);
    plVar10 = (long *)*puVar2;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02aac018;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_02aac018:
    uVar7 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      plVar10 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x28),
                                           *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                    -0x30) + 0x20) +
                                                                0xc0) + 0x80) + 0xe0);
      lVar4 = *plVar10;
      puVar2 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x28),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) +
                                                                 0x20) + 0xc0) + 0x80) + 0x120);
      plVar10 = (long *)*puVar2;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_02aac180;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_01ecb238(plVar10,lVar5,0);
LAB_02aac180:
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x20);
      puVar2 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x28),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) +
                                                                 0x20) + 0xc0) + 0x80) + 0x140);
      plVar10 = (long *)*puVar2;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x40);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
            goto FUN_02aac22c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_01ecb238(plVar10,lVar5,0);
FUN_02aac22c:
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x22;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0);
      puVar2 = *(undefined8 **)(lVar5 + 0x70);
      uVar3 = *puVar2;
      if (-1 < *(int *)(*(long *)(lVar5 + 0x58) + 0x28)) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      if (-1 < *(int *)(*(long *)(lVar5 + 0x68) + 0x28)) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
      (*(code *)puVar2[2])(uVar3,puVar2,lVar4,unaff_x29 + -0x20);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x28),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      uVar9 = 1;
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x28),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x80),1);
      goto LAB_02aac144;
    }
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 8))
            (*(undefined8 *)(unaff_x29 + -0x28));
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x28),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x80)
               + 0x140,0);
  (*(code *)**(undefined8 **)
              (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x10))
            (*(undefined8 *)(unaff_x29 + -0x28));
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x28),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0) + 0x80)
               + 0x120,0);
  uVar9 = 0;
LAB_02aac144:
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


