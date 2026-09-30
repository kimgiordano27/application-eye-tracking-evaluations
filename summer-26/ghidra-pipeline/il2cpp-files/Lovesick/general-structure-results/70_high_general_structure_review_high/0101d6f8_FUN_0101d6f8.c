/*
FUNCTION_NAME: FUN_0101d6f8
ENTRY_POINT: 0101d6f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0101d6f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_03775e4d & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsra_n_s64__);
    thunk_FUN_00d48444(StringLiteral_6218);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Data_DataTable_set_Locale__);
    thunk_FUN_00d48444(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    thunk_FUN_00d48444(StringLiteral_1857);
    thunk_FUN_00d48444(Method_Autohand_AutoHandExtensions_CanGetComponent<Rigidbody>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_u32__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Count<IInteractorView>__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03775e4d = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  FUN_0101d11c(param_1);
  puVar8 = StringLiteral_6218;
  puVar7 = StringLiteral_1857;
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsra_n_s64__;
  puVar5 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
  puVar4 = Method_System_Linq_Enumerable_Count<IInteractorView>__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
  ;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x80),&local_98,
                 *(undefined8 *)Method_Autohand_AutoHandExtensions_CanGetComponent<Rigidbody>__);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      lVar10 = FUN_00ac66a0(&local_80,*(undefined8 *)puVar7);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_010c2c5c(lVar10,&local_68,*(undefined8 *)puVar2);
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026f2c70(local_68,1,0);
      uVar12 = *(undefined8 *)(lVar10 + 0xb0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_0268b5e4(uVar12,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar10 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_010c2e94(*(long *)(lVar10 + 0xb0),&local_68,*(undefined8 *)puVar6);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_00feca30(local_68,0,0);
      }
    }
    FUN_012b8948(&local_80,*(undefined8 *)Method_System_Data_DataTable_set_Locale__);
    lVar10 = *(long *)(param_1 + 0x80);
    if (lVar10 != 0) {
      iVar11 = 0;
      do {
        if (*(int *)(lVar10 + 0x18) <= iVar11) {
          return;
        }
        lVar10 = FUN_00ed56f0(0);
        if ((lVar10 == 0) || (*(long *)(param_1 + 0x80) == 0)) break;
        lVar10 = *(long *)(lVar10 + 0x40);
        FUN_0132138c(*(long *)(param_1 + 0x80),iVar11,&local_98,*(undefined8 *)puVar4);
        if (local_98 == 0) break;
        FUN_010c2c5c(local_98,&local_98,*(undefined8 *)puVar8);
        if ((local_98 == 0) || (lVar10 == 0)) break;
        uVar9 = FUN_00fcb580(lVar10,*(undefined8 *)(local_98 + 0x28),0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x80) == 0) break;
          FUN_0132138c(*(long *)(param_1 + 0x80),iVar11,&local_98,*(undefined8 *)puVar4);
          if ((local_98 == 0) || (lVar10 = FUN_0268fd4c(local_98,0), lVar10 == 0)) break;
          FUN_0268ace8(lVar10,0,0);
          if (*(long *)(param_1 + 0x80) == 0) break;
          FUN_0132138c(*(long *)(param_1 + 0x80),iVar11,&local_98,*(undefined8 *)puVar4);
          if (local_98 == 0) break;
          FUN_010c2c5c(local_98,&local_98,*(undefined8 *)puVar2);
          if (local_98 == 0) break;
          FUN_026f2c70(local_98,0,0);
          if (*(long *)(param_1 + 0x88) == 0) break;
          FUN_0132138c(*(long *)(param_1 + 0x88),iVar11,&local_98,*(undefined8 *)puVar3);
          if (local_98 == 0) break;
          uVar12 = FUN_0268b334(local_98,0);
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar10);
          }
          FUN_0268c114(uVar12,0);
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
        }
        lVar10 = *(long *)(param_1 + 0x80);
        iVar11 = iVar11 + 1;
      } while (lVar10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


