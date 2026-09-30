/*
FUNCTION_NAME: System.Array.InternalEnumerator<DrawingData.ProcessedBuilderData.MeshBuffers>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02ead97c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eadc40) */
/* WARNING: Removing unreachable block (ram,0x02eadcf4) */

void System_Array_InternalEnumerator<DrawingData_ProcessedBuilderData_MeshBuffers>__System_Collections_IEnumerator_get_Current
               (void *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  size_t unaff_x24;
  int unaff_w25;
  undefined1 *__s;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  memset(param_1,param_2,unaff_x24);
  lVar4 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_039dcb20();
  if (unaff_w25 == 0) {
    __s = (undefined1 *)0x0;
  }
  else {
    __s = &stack0x00000000 + -(unaff_x24 + 0xf & 0xfffffffffffffff0);
  }
  memset(__s,0,unaff_x24);
  lVar5 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_039dcb20(lVar5,__s,unaff_w25,0);
  if (unaff_x23 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *unaff_x23;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02eada58;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02eada58:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar7 = (long *)(*(code *)*puVar6)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02eadac8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02eadac8:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_02eadc34;
        lVar5 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 == 0) goto LAB_02eadc0c;
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_02eadbf4;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02eadb40;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,0);
LAB_02eadb40:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar11 = FUN_02eaddc8();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar11 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar5,iVar1,0);
          if ((uVar11 & 1) == 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(lVar4,iVar1,0);
          }
        }
      }
      else {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar5,iVar1,0);
      }
    } while( true );
  }
LAB_02eadce0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02eadbf4:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02eadc28;
    }
  }
LAB_02eadc0c:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_02eadc28:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_02eadc34:
  if (0 < (int)unaff_x21) {
    if (lVar4 == 0) goto LAB_02eadce0;
    uVar11 = 0;
    do {
      uVar8 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar4,uVar11 & 0xffffffff,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02eadce0;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        FUN_02ea9ff0();
      }
      uVar11 = uVar11 + 1;
    } while (unaff_x21 != uVar11);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


