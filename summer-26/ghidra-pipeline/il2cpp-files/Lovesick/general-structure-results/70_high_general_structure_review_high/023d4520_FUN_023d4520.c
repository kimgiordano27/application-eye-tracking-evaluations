/*
FUNCTION_NAME: FUN_023d4520
ENTRY_POINT: 023d4520
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_023d4520(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03782108 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_UIElements_Cursor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80>__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<GameObject>_ToArray__);
    thunk_FUN_00d48444(StringLiteral_6951);
    thunk_FUN_00d48444(
                      RCG_Lovesick_InteractiveObjects_GrabbableObject_<StartObjectDroppedTutorial>d__87_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildElement_Form__);
    thunk_FUN_00d48444(StringLiteral_12638);
    thunk_FUN_00d48444(Method_System_IO_Compression_GZipStream_set_Position__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshlh_u16__);
    thunk_FUN_00d48444(Method_FullSerializer_fsData_Cast<string>__);
    thunk_FUN_00d48444(UnityEngine_TextCore_Text_TextOverflowMode_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s64__);
    thunk_FUN_00d48444(Method_UnityEngine_IntegratedSubsystem<XRInputSubsystemDescriptor>__ctor__);
    DAT_03782108 = 1;
  }
  puVar2 = Method_FullSerializer_fsData_Cast<string>__;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0129a9f4(*(long *)(param_1 + 0x10),
                 *(undefined8 *)
                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80>__ctor__
                );
    *(undefined1 *)(param_1 + 0x20) = 1;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar7 != 0) &&
       (FUN_01320e50(lVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshlh_u16__),
       puVar5 = StringLiteral_6951, puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabs_s64__,
       puVar3 = Method_System_Xml_Schema_XsdBuilder_BuildElement_Form__,
       puVar2 = UnityEngine_TextCore_Text_TextOverflowMode_TypeInfo, param_2 != 0)) {
      FUN_01323390(param_2,&local_98,*(undefined8 *)StringLiteral_12638);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while( true ) {
        uVar8 = FUN_012b894c(&local_80,*(undefined8 *)puVar5);
        if ((uVar8 & 1) == 0) {
          FUN_012b8948(&local_80,
                       *(undefined8 *)Method_System_Collections_Generic_List<GameObject>_ToArray__);
          uVar10 = FUN_01325140(lVar7,*(undefined8 *)
                                       Method_System_IO_Compression_GZipStream_set_Position__);
          *(undefined8 *)(param_1 + 0x18) = uVar10;
          return;
        }
        lVar9 = FUN_00addde4(&local_80,
                             *(undefined8 *)
                              RCG_Lovesick_InteractiveObjects_GrabbableObject_<StartObjectDroppedTutorial>d__87_TypeInfo
                            );
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = thunk_FUN_00d93c64(lVar9,0);
        plVar11 = (long *)FUN_0268d8e0(uVar10,0);
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_IntegratedSubsystem<XRInputSubsystemDescriptor>__ctor__
                           + 300);
          if ((*(byte *)(*plVar11 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_IntegratedSubsystem<XRInputSubsystemDescriptor>__ctor__))
          {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar11);
          }
        }
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0129a054(*(long *)(param_1 + 0x10),uVar10,plVar11,
                     *(undefined8 *)UnityEngine_UIElements_Cursor_TypeInfo);
        if (plVar11 == (long *)0x0) break;
        if (plVar11[5] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar6 = FUN_013836e0(plVar11[5],*(undefined8 *)puVar2);
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (plVar11[5] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01383784(plVar11[5],iVar12,&local_98,*(undefined8 *)puVar4);
            uVar10 = local_98;
            if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01383784(*(long *)(lVar9 + 0x28),iVar12,&local_98,*(undefined8 *)puVar4);
            FUN_00caec60(lVar7,uVar10,local_98,*(undefined8 *)puVar3);
            iVar12 = iVar12 + 1;
          } while (iVar6 != iVar12);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


