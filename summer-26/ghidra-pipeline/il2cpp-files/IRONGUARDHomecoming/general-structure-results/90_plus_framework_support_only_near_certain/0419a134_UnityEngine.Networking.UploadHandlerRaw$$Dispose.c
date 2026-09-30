/*
FUNCTION_NAME: UnityEngine.Networking.UploadHandlerRaw$$Dispose
ENTRY_POINT: 0419a134
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419a5d8) */

void UnityEngine_Networking_UploadHandlerRaw__Dispose(long param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  byte unaff_w29;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    in_stack_00000008 = 0;
    bVar1 = *(char *)(unaff_x22 + 0x60) != '\0';
    if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (*(long *)(unaff_x19 + 0x400),unaff_x22,&stack0x00000008,
                       *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<Toggle>__)
    ;
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar4 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x10),0);
      auVar12 = FUN_042381bc(*(undefined8 *)(unaff_x22 + 0x4c),0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x20) * 0x10 + 0x138);
            goto FUN_0419a1f4;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,0x20);
FUN_0419a1f4:
      (*(code *)*puVar5)(plVar4,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar5[1]);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar4 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x10),0);
      auVar12 = FUN_042381bc(*(undefined8 *)(unaff_x22 + 0x54),0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x1f) * 0x10 + 0x138);
            goto LAB_0419a28c;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,0x1f);
LAB_0419a28c:
      (*(code *)*puVar5)(plVar4,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar5[1]);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(in_stack_00000008 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar4 = (long *)FUN_04220be0(*(long *)(in_stack_00000008 + 0x18),0);
      if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(char *)(*(long *)(unaff_x19 + 0x420) + 0x31) == '\0') {
        bVar2 = 1;
      }
      else {
        bVar2 = *(byte *)(unaff_x22 + 99) ^ 1;
      }
      uVar6 = FUN_02766f28(bVar2,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x12) * 0x10 + 0x138);
            goto LAB_0419a344;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,0x12);
LAB_0419a344:
      (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
    }
    lVar8 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0419a0c8;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0419a0c8:
    uVar3 = (*(code *)*puVar5)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0419a3c0;
      lVar8 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 == 0) goto LAB_0419a398;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_0419a380;
    }
    lVar8 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0419a124;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0419a124:
    param_1 = (*(code *)*puVar5)();
    unaff_x22 = param_1;
    unaff_w29 = unaff_w29 | bVar1;
  } while( true );
code_r0x0419a538:
  uVar3 = uVar3 - 1;
  piVar11 = piVar11 + 4;
  if (uVar3 == 0) goto LAB_0419a544;
  goto LAB_0419a52c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar11 = piVar11 + 4;
    if (uVar3 == 0) break;
LAB_0419a380:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0419a3b4;
    }
  }
LAB_0419a398:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0419a3b4:
  (*(code *)*puVar5)();
LAB_0419a3c0:
  if (*(long *)(unaff_x19 + 0x410) == 0) goto LAB_0419a5d0;
  plVar4 = (long *)FUN_04220be0(*(long *)(unaff_x19 + 0x410),0);
  if ((unaff_w29 & 1) == 0 && !bVar1) {
    uVar6 = FUN_042379d8(0,0);
    if (plVar4 == (long *)0x0) goto LAB_0419a5d0;
    lVar9 = *plVar4;
    lVar8 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          iVar10 = *piVar11 + 0x15;
          goto LAB_0419a554;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    uVar7 = 0x15;
  }
  else {
    uVar6 = FUN_042379d8(0x3f800000,0);
    if (plVar4 == (long *)0x0) {
LAB_0419a5d0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
          goto LAB_0419a494;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,0x15);
LAB_0419a494:
    (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
    if (*(long *)(unaff_x19 + 0x420) == 0) goto LAB_0419a5d0;
    if (*(int *)(*(long *)(unaff_x19 + 0x420) + 0x2c) != 1) goto LAB_0419a56c;
    if (*(long *)(unaff_x19 + 0x400) == 0) goto LAB_0419a5d0;
    uVar3 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (*(long *)(unaff_x19 + 0x400),unaff_x22);
    if ((uVar3 & 1) == 0) goto LAB_0419a56c;
    if ((in_stack_00000000 == 0) || (*(long *)(in_stack_00000000 + 0x18) == 0)) goto LAB_0419a5d0;
    plVar4 = (long *)FUN_04220be0(*(long *)(in_stack_00000000 + 0x18),0);
    uVar6 = FUN_02766f28(1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
    if (plVar4 == (long *)0x0) goto LAB_0419a5d0;
    lVar9 = *plVar4;
    lVar8 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
LAB_0419a52c:
      if (*(long *)(piVar11 + -2) != lVar8) goto code_r0x0419a538;
      iVar10 = *piVar11 + 0x12;
LAB_0419a554:
      puVar5 = (undefined8 *)(lVar9 + (long)iVar10 * 0x10 + 0x138);
      goto LAB_0419a55c;
    }
LAB_0419a544:
    uVar7 = 0x12;
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar8,uVar7);
LAB_0419a55c:
  (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
LAB_0419a56c:
  FUN_04198670();
  return;
}


