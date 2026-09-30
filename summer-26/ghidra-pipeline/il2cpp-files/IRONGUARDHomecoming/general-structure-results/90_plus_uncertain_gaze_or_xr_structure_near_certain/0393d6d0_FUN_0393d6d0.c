/*
FUNCTION_NAME: FUN_0393d6d0
ENTRY_POINT: 0393d6d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0393e32c) */
/* WARNING: Removing unreachable block (ram,0x0393e34c) */
/* WARNING: Removing unreachable block (ram,0x0393dee4) */
/* WARNING: Removing unreachable block (ram,0x0393e340) */
/* WARNING: Removing unreachable block (ram,0x0393e108) */

void FUN_0393d6d0(long param_1,uint *param_2,long param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_f0;
  long lStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  long local_68;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_04838340 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    thunk_FUN_01efb3a4(StringLiteral_3883);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(StringLiteral_3545);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3858);
    thunk_FUN_01efb3a4(StringLiteral_3859);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3884);
    thunk_FUN_01efb3a4(StringLiteral_3885);
    thunk_FUN_01efb3a4(StringLiteral_3886);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_DeleteFile__);
    thunk_FUN_01efb3a4(StringLiteral_3126);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>_ParseChoiceList__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_CreateDirectory__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    thunk_FUN_01efb3a4(StringLiteral_3887);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<int,_int>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3888);
    thunk_FUN_01efb3a4(StringLiteral_2862);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_OrderBy<ValueOutput,_int>__);
    thunk_FUN_01efb3a4(StringLiteral_3889);
    thunk_FUN_01efb3a4(StringLiteral_3890);
    thunk_FUN_01efb3a4(StringLiteral_3891);
    thunk_FUN_01efb3a4(StringLiteral_3892);
    DAT_04838340 = 1;
  }
  local_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (param_1,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_3863);
    FUN_034efd20(uVar12,uVar13,0);
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_3893);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar13);
  }
  if ((param_5 == 0) && ((param_4 & 1) != 0)) {
    param_5 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_CreateDirectory__);
    FUN_030f2380(param_5,*(undefined8 *)Method_System_IO_FileSystem_DeleteFile__);
  }
  puVar1 = StringLiteral_2862;
  puVar11 = param_2 + 2;
  lVar14 = *(long *)puVar11;
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) &&
     ((*(long *)(param_2 + 0xe) == 0 || (*(int *)(*(long *)(param_2 + 0xe) + 0x18) == 0)))) {
    uVar10 = *param_2;
    if (uVar10 == 2) {
      if ((int)*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar10 = (uint)(*(char *)(lVar14 + 0x20) == '{');
      if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_0391b48c(lVar14,1,0);
      local_f0 = *(undefined8 *)StringLiteral_3545;
      lStack_e8 = -1;
      local_e0 = uVar10;
      uVar13 = FUN_0359ff90(&local_f0,0);
      uVar12 = FUN_0340eee0(*(undefined8 *)StringLiteral_3892,uVar13,
                            *(undefined8 *)StringLiteral_3891,uVar12,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(uVar12,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393b0d8(param_1,puVar11,param_2 + 4,uVar10,param_3);
    uVar12 = *(undefined8 *)(param_2 + 10);
    uVar13 = *(undefined8 *)(param_2 + 0xc);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e72c(param_1,uVar13,uVar12);
    return;
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    lVar14 = FUN_029da4a8(*(undefined8 *)
                           Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    param_3 = FUN_029dad5c(lVar14,*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = FUN_0390b368(param_3,0);
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_0391cfa8(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar12,uVar12);
    }
    FUN_0391d334(lVar8,uVar12,0);
    uVar3 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_0390b368(param_3,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_0390b70c(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar8,0,0);
      lVar8 = FUN_0390b368(param_3,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_0390b70c(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar8,0,0);
      lVar8 = FUN_0390b368(param_3,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_0390b70c(lVar8,0);
      if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_038d6628(0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar12,uVar12);
      }
      FUN_0391d75c(lVar8,uVar12,0);
    }
    else {
      lVar8 = FUN_0390b368(param_3,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_0390b70c(lVar8,0);
      puVar2 = StringLiteral_3859;
      lVar6 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar8,*(undefined4 *)(lVar6 + 0x28),0);
      lVar8 = FUN_0390b368(param_3,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_0390b70c(lVar8,0);
      lVar6 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar8,*(undefined4 *)(lVar6 + 0x24),0);
      lVar8 = FUN_0390b368(param_3,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_0390b70c(lVar8,0);
      lVar6 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = FUN_038d6930(lVar6,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar12,uVar12);
      }
      FUN_0391d75c(lVar8,uVar12,0);
    }
  }
  else {
    lVar14 = 0;
  }
  puVar2 = StringLiteral_3884;
  plVar4 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)StringLiteral_3884);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0393dcc8;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0393dcc8:
    lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar8 != 0) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = FUN_0390b368(param_3,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d334(lVar6,lVar8,0);
    }
  }
  if ((param_4 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_2 + 8);
    if (*(int *)(*(long *)StringLiteral_3888 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0394efcc(uVar12,0);
    puVar2 = StringLiteral_3886;
    if ((uVar3 & 1) == 0) {
      lVar8 = thunk_FUN_01f116d0(*(undefined8 *)(param_2 + 8),*(undefined8 *)StringLiteral_3886);
      if (lVar8 == 0) {
        if (*(long *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = thunk_FUN_01ecaf38(*(long *)(param_2 + 8),0);
        puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        uVar13 = *(undefined8 *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar13 = FUN_03579868(uVar13,0);
        uVar3 = FUN_03583338(uVar12,uVar13,0);
        if ((uVar3 & 1) != 0) {
          lVar8 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar8 + 0x20) =
               *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<ValueOutput,_int>__;
          thunk_FUN_01f51358();
          if (*(long *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = thunk_FUN_01ecaf38(*(long *)(param_2 + 8),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_0392f420(uVar12);
          if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar8 + 0x28) = uVar12;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)StringLiteral_3890;
          thunk_FUN_01f51358();
          uVar12 = *(undefined8 *)StringLiteral_3885;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03579868(uVar12,0);
          uVar12 = FUN_0392f420();
          if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar8 + 0x38) = uVar12;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)StringLiteral_3889;
          thunk_FUN_01f51358();
          uVar12 = FUN_0340efe8(lVar8,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar12,0);
        }
      }
      else {
        lVar8 = *(long *)(param_2 + 8);
        if (((lVar8 != param_1) || (*(long *)(param_2 + 0xc) == 0)) ||
           (*(int *)(*(long *)(param_2 + 0xc) + 0x18) < 1)) {
          lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)puVar2);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = *(long *)puVar2;
          plVar4 = (long *)thunk_FUN_01f116d0(lVar8,lVar6);
          lVar8 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0393e218;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_0393e218:
          (*(code *)*puVar5)(&local_f0,plVar4,puVar5[1]);
          local_a0 = CONCAT44(uStack_dc,local_e0);
          lStack_a8 = lStack_e8;
          local_b0 = local_f0;
          uStack_98 = uStack_d8;
          uStack_88 = uStack_c8;
          local_90 = local_d0;
          local_78 = lStack_b8;
          local_80 = lStack_c0;
          if (((lStack_e8 == 0) || (lStack_b8 == 0)) || (lStack_c0 == 0)) {
            uVar12 = *(undefined8 *)(param_2 + 4);
            lVar8 = *(long *)puVar1;
LAB_0393e294:
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar8);
            }
            FUN_0393d6d0(param_1,param_2,param_3,1,uVar12);
          }
          else {
            uVar12 = *(undefined8 *)(param_2 + 4);
            lVar8 = *(long *)puVar1;
            if (local_a0 == 0) goto LAB_0393e294;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar8);
            }
            FUN_0393d6d0(param_1,&local_b0,param_3,1,uVar12);
          }
          uVar12 = *(undefined8 *)(param_2 + 10);
          uVar13 = *(undefined8 *)(param_2 + 0xc);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0393e72c(param_1,uVar13,uVar12);
          goto LAB_0393e19c;
        }
      }
    }
    param_5 = *(long *)(param_2 + 4);
  }
  local_68 = param_5;
  if (*param_2 == 2) {
    plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3887);
    FUN_038efcd0(plVar4,param_3,0);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03937bf8(plVar7[3],local_68);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(param_3 + 0x50) = plVar7[3];
    thunk_FUN_01f51358();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_038f05a8(plVar4,*(undefined8 *)(param_2 + 0xe),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e9c4(param_1,plVar4);
    lVar8 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0393decc;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393decc:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0393e0f0;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393e0f0:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  else if ((*(long *)puVar11 == 0) || (*(long *)(*(long *)puVar11 + 0x18) == 0)) {
    uVar10 = *param_2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393f988(param_1,param_2 + 6,&local_68,uVar10,param_3);
  }
  else {
    uVar10 = *param_2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393b0d8(param_1,puVar11,&local_68,uVar10,param_3);
  }
  uVar12 = *(undefined8 *)(param_2 + 10);
  uVar13 = *(undefined8 *)(param_2 + 0xc);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0393e72c(param_1,uVar13,uVar12);
LAB_0393e19c:
  if (lVar14 != 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    FUN_029da814(lVar14,*(undefined8 *)StringLiteral_3883);
  }
  return;
}


