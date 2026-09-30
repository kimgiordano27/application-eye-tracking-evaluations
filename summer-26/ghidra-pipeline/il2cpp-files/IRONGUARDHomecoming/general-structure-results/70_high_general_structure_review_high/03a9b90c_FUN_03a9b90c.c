/*
FUNCTION_NAME: FUN_03a9b90c
ENTRY_POINT: 03a9b90c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 FUN_03a9b90c(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 local_98;
  undefined4 *puStack_90;
  long *local_88;
  long lStack_80;
  undefined4 local_74;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_04838f1f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Unit_ValueOutput<Vector2>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Unit_EnsureUniqueInput__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Unit_EnsureUniqueOutput__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<string>__);
    thunk_FUN_01efb3a4(StringLiteral_8486);
    thunk_FUN_01efb3a4(StringLiteral_8487);
    thunk_FUN_01efb3a4(StringLiteral_8488);
    thunk_FUN_01efb3a4(StringLiteral_8489);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7476);
    thunk_FUN_01efb3a4(StringLiteral_8490);
    DAT_04838f1f = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_74 = 0;
  FUN_03a9cbac(param_1);
  puVar2 = StringLiteral_8487;
  if (param_2 != (long *)0x0) {
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_8487) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03a9ba38;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(param_2,*(long *)StringLiteral_8487,0);
LAB_03a9ba38:
    iVar7 = (*(code *)*puVar9)(param_2,puVar9[1]);
    puVar4 = StringLiteral_8490;
    puVar3 = StringLiteral_8486;
    if (iVar7 != 0) {
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03a9baa4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar2,0);
LAB_03a9baa4:
      iVar7 = (*(code *)*puVar9)(param_2,puVar9[1]);
      local_68._4_4_ = iVar7;
      local_70 = FUN_01f08890(*(undefined8 *)puVar3,iVar7);
      puStack_90 = &local_74;
      local_88 = &local_70;
      local_98 = 0;
      lStack_80 = (long)&local_68 + 4;
      lVar12 = FUN_01f08890(*(undefined8 *)puVar4,iVar7);
      puVar5 = StringLiteral_8489;
      puVar4 = StringLiteral_8488;
      puVar3 = Method_Oculus_Platform_Callback_SetNotificationCallback<string>__;
      puVar2 = 
      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__;
      if (lVar12 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        if (*(int *)(lVar12 + 0x18) != 0) {
          lVar15 = lVar12 + 0x20;
        }
      }
      if (0 < local_68._4_4_) {
        uVar16 = 0;
        do {
          lVar12 = *param_2;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03a9bb8c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar4,0);
LAB_03a9bb8c:
          auVar17 = (*(code *)*puVar9)(param_2,uVar16,puVar9[1]);
          lVar12 = auVar17._0_8_;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (auVar17._8_4_ < 0) {
LAB_03a9bd08:
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__
                              );
            uVar10 = thunk_FUN_01f117cc();
            uVar11 = thunk_FUN_01efb3a4(StringLiteral_8491);
            FUN_034f7db4(uVar10,uVar11,0);
            uVar11 = thunk_FUN_01efb3a4(StringLiteral_8495);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar10,uVar11);
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((long)auVar17._8_8_ < 0) goto LAB_03a9bd08;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar6 = local_70;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar12 + 0x18) - auVar17._8_4_ < auVar17._12_4_) goto LAB_03a9bd08;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_034a48dc(lVar12,3,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar6 + (long)(int)uVar16 * 8 + 0x20) = uVar10;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          piVar14 = (int *)(lVar15 + (long)(int)uVar16 * 0x10);
          if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *piVar14 = auVar17._12_4_;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = System_Array__InternalArray__ICollection_Add<DrawingData_BuilderData>
                             (lVar12,auVar17._8_8_ & 0xffffffff,*(undefined8 *)puVar5);
          *(undefined8 *)(piVar14 + 2) = uVar10;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < local_68._4_4_);
      }
      iVar7 = local_68._4_4_;
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      cVar1 = *(char *)(param_1 + 0x50);
      if (*(int *)(*(long *)StringLiteral_7476 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03a9ffc0(uVar10,lVar15,iVar7,param_3,&local_68,cVar1 != '\0');
      FUN_01e5a0f0(&local_98);
      *param_4 = (undefined4)local_68;
      return uVar8;
    }
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar10 = thunk_FUN_01f117cc();
  uVar11 = thunk_FUN_01efb3a4(
                             Field_<PrivateImplementationDetails>_9986DF84A7E97E6908678E5B63FEF37F4CDFBB2994454F971516F8E2C9D8FEEB
                             );
  FUN_034efd20(uVar10,uVar11,0);
  uVar11 = thunk_FUN_01efb3a4(StringLiteral_8495);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,uVar11);
}


