/*
FUNCTION_NAME: FUN_0187a8dc
ENTRY_POINT: 0187a8dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_0187a8dc(long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,long param_8)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  int *piVar16;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char local_80 [4];
  char local_7c;
  long local_78;
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
  local_58 = param_4;
  if ((DAT_0377975d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_XDR_EndGroup__);
    thunk_FUN_00d48444(Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessWrite__);
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<SystemVoipState>__ctor__);
    thunk_FUN_00d48444(Autohand_Hand_<GrabObject>d__125_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(sbyte___var);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_Clipper_Execute__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_633);
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetByteCount__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10452);
    DAT_0377975d = 1;
  }
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_7c = '\0';
  local_80[0] = '\0';
  plVar5 = *(long **)(param_1 + 0x20);
  local_68 = param_3;
  if (plVar5 == (long *)0x0) goto LAB_0187b19c;
  iVar3 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
  if (iVar3 == 2) {
    if (param_2 == (long *)0x0) goto LAB_0187b19c;
    uVar6 = FUN_01808c00(param_2,0);
    local_60 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_0187b19c;
    iVar3 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
    puVar14 = Autohand_Hand_<GrabObject>d__125_TypeInfo;
    if (iVar3 == 1) {
      if (param_2 == (long *)0x0) {
LAB_0187aaac:
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar7 = FUN_018b8dec(param_2,0);
        if (lVar7 == 0) goto LAB_0187b19c;
        plVar5 = (long *)Oculus_Interaction_PointableCanvasModule__DisableOtherModules(lVar7,0);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar14 + 300);
          if ((*(byte *)(*plVar5 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar14)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar5);
          }
        }
        if ((param_2 == (long *)0x0) || (lVar7 = FUN_01805234(param_2,0), plVar5 == (long *)0x0))
        goto LAB_0187b19c;
        plVar5[8] = lVar7;
        plVar5[0xc] = param_2[0xc];
        FUN_01804e5c(plVar5,(int)param_2[0xb],0);
        FUN_01804df0(plVar5,(int)param_2[9],0);
        FUN_01804ec8(plVar5,*(undefined4 *)((long)param_2 + 0x5c),0);
        *(undefined1 *)((long)plVar5 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
        FUN_01808c00(plVar5,0);
      }
      else {
        bVar1 = *(byte *)(*(long *)Autohand_Hand_<GrabObject>d__125_TypeInfo + 300);
        if ((*(byte *)(*param_2 + 300) < bVar1) ||
           (plVar5 = param_2,
           *(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)Autohand_Hand_<GrabObject>d__125_TypeInfo)) goto LAB_0187aaac;
      }
      uVar6 = FUN_0187c1a4(param_1,plVar5,&local_68,&local_58,param_5,param_6,param_7,param_8,
                           &local_70,&local_60);
      param_2 = plVar5;
      lVar7 = local_70;
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_0187b19c;
      FUN_01808c00(param_2,0);
      uVar6 = FUN_0187c8dc(param_1,param_2,&local_68,&local_58,param_5,param_6,param_7,param_8,
                           &local_78,&local_60);
      lVar7 = local_78;
    }
    if ((uVar6 & 1) != 0) {
      return lVar7;
    }
  }
  plVar2 = local_58;
  uVar6 = FUN_0187cf80(uVar6,local_58);
  plVar5 = local_68;
  puVar14 = System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_0187a46c(param_1,param_2);
    return lVar7;
  }
  if (plVar2 == (long *)0x0) goto LAB_0187b19c;
  switch(*(undefined4 *)((long)plVar2 + 0x24)) {
  case 1:
    local_7c = '\0';
    bVar1 = *(byte *)(*(long *)StringLiteral_633 + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_633))
    {
LAB_0187b258:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar2);
    }
    if (param_8 == 0) {
LAB_0187ac78:
      param_8 = FUN_0187d07c(param_1,param_2,plVar2,param_5);
      if (local_7c != '\0') {
        return param_8;
      }
    }
    else {
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01789ac0(plVar5,param_3,0);
      if ((uVar6 & 1) == 0) {
        uVar10 = thunk_FUN_00d93c64(param_8,0);
        if (plVar5 == (long *)0x0) goto LAB_0187b19c;
        uVar6 = (**(code **)(*plVar5 + 0x2c8))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x2d0));
        if ((uVar6 & 1) == 0) goto LAB_0187ac78;
      }
    }
    lVar7 = FUN_01878678(param_1,param_8,param_2,plVar2,param_5,local_60);
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)Method_System_Text_UTF8Encoding_GetByteCount__ + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Text_UTF8Encoding_GetByteCount__)) goto LAB_0187b258;
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_0187b19c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar3 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
    if ((iVar3 != 2) &&
       (iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240)),
       iVar3 == 4)) {
      plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      puVar14 = StringLiteral_10452;
      if (plVar5 == (long *)0x0) goto LAB_0187b19c;
      uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar6 = FUN_015fe560(uVar10,*(undefined8 *)puVar14,4,0);
      if ((uVar6 & 1) != 0) {
        FUN_01808c00(param_2,0);
        iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar3 != 1) {
          lVar7 = FUN_01879aa8(param_1,param_2,local_68,plVar2,param_5,0,0,param_8);
          FUN_01808c00(param_2,0);
          return lVar7;
        }
        FUN_00ac2be8(param_2);
        uVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        local_98 = thunk_FUN_00d48444(
                                     Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                     );
        uStack_90 = 0xffffffffffffffff;
        local_88 = uVar4;
        uVar10 = FUN_017a7f78(&local_98,0);
        uVar11 = thunk_FUN_00d48444(
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                   );
        uVar10 = FUN_015f5b28(uVar11,uVar10,0);
        goto LAB_0187b22c;
      }
    }
  default:
    uVar10 = FUN_017b7e58(0);
    uVar11 = FUN_017b7e58(0);
    uVar12 = thunk_FUN_00d48444(OVR_OpenVR_EIOBufferMode_TypeInfo);
    uVar13 = thunk_FUN_00d48444(StringLiteral_505);
    uVar10 = FUN_0160073c(uVar12,uVar10,uVar13,uVar11,0);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar11 = FUN_01731954(0);
    plVar5 = local_68;
    uVar12 = FUN_0187c0e4(uVar11,plVar2);
    uVar10 = FUN_018652e8(uVar10,uVar11,plVar5,uVar12);
LAB_0187b22c:
    uVar10 = FUN_01801b58(param_2,uVar10,0);
    uVar11 = thunk_FUN_00d48444(
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_Inputs_TouchscreenGestureInputController_OnGestureStarted<PinchGesture>__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar11);
  case 5:
    bVar1 = *(byte *)(*(long *)sbyte___var + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)sbyte___var))
    goto LAB_0187b258;
    if (param_8 != 0) {
      if (((char)plVar2[0x20] == '\0') &&
         (lVar7 = thunk_FUN_00d6225c(param_8,*(undefined8 *)
                                              System_Globalization_DateTimeFormatInfoScanner_TypeInfo
                                    ), lVar7 != 0)) {
        uVar10 = *(undefined8 *)puVar14;
        lVar7 = thunk_FUN_00d6225c(param_8,uVar10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_8,uVar10);
        }
      }
      else {
        lVar7 = FUN_0187467c(plVar2,param_8);
      }
      lVar7 = FUN_01877cb4(param_1,lVar7,param_2,plVar2,param_5,local_60);
      return lVar7;
    }
    lVar7 = FUN_0187d2b4(param_1,param_2,plVar2,local_80);
    puVar14 = Method_Oculus_Platform_Request<SystemVoipState>__ctor__;
    if (local_80[0] == '\0') {
      FUN_01877cb4(param_1,lVar7,param_2,plVar2,param_5);
      plVar5 = (long *)thunk_FUN_00d6225c(lVar7,*(undefined8 *)puVar14);
      if (plVar5 == (long *)0x0) {
        return lVar7;
      }
      lVar15 = *plVar5;
      lVar7 = *(long *)puVar14;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0187b18c;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar5,lVar7,0);
LAB_0187b18c:
      lVar7 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      return lVar7;
    }
    if (local_60 == 0) {
      plVar5 = (long *)FUN_01869900(plVar2);
      if (plVar5 == (long *)0x0) goto LAB_0187b19c;
      lVar15 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessWrite__) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0187b05c;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar5,*(long *)
                                    Method_Mono_Net_Security_MobileAuthenticatedStream_ProcessWrite__
                            ,0);
LAB_0187b05c:
      iVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      if (iVar3 < 1) {
        plVar5 = (long *)FUN_0186be90(plVar2);
        if (plVar5 == (long *)0x0) goto LAB_0187b19c;
        lVar15 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_System_Xml_Schema_XdrBuilder_XDR_EndGroup__) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto Oculus_Interaction_Grabbable__BeginTransform;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_00d59724(plVar5,*(long *)Method_System_Xml_Schema_XdrBuilder_XDR_EndGroup__,0);
Oculus_Interaction_Grabbable__BeginTransform:
        iVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
        if (iVar3 < 1) {
          uVar6 = FUN_018745fc(plVar2);
          puVar14 = StringLiteral_3033;
          if ((uVar6 & 1) != 0) {
            FUN_01877cb4(param_1,lVar7,param_2,plVar2,param_5,0);
            lVar15 = plVar2[0x22];
            if (lVar15 == 0) {
              lVar15 = FUN_01874518(plVar2);
            }
            plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar14,1);
            if (plVar5 != (long *)0x0) {
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
                uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar10,0);
              }
              if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar5[4] = lVar7;
              if (lVar15 != 0) {
                lVar7 = (**(code **)(lVar15 + 0x18))
                                  (*(undefined8 *)(lVar15 + 0x40),plVar5,
                                   *(undefined8 *)(lVar15 + 0x28));
                return lVar7;
              }
            }
            goto LAB_0187b19c;
          }
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar10 = FUN_01731954(0);
          FUN_00ac2be8(plVar2);
          lVar7 = plVar2[0xc];
          puVar14 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdivq_f32__;
        }
        else {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar10 = FUN_01731954(0);
          FUN_00ac2be8(plVar2);
          lVar7 = plVar2[0xc];
          puVar14 = StringLiteral_8581;
        }
      }
      else {
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar10 = FUN_01731954(0);
        FUN_00ac2be8(plVar2);
        lVar7 = plVar2[0xc];
        puVar14 = StringLiteral_8021;
      }
    }
    else {
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar10 = FUN_01731954(0);
      FUN_00ac2be8(plVar2);
      lVar7 = plVar2[0xc];
      puVar14 = OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyType_TypeInfo;
    }
    uVar11 = thunk_FUN_00d48444(puVar14);
    uVar10 = FUN_018651d4(uVar11,uVar10,lVar7);
    goto LAB_0187b22c;
  case 6:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_Rendering_Universal_Clipper_Execute__ + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_Rendering_Universal_Clipper_Execute__)) goto LAB_0187b258;
    lVar7 = FUN_0187d500(param_1,param_2,plVar2,param_5,local_60);
    break;
  case 7:
    bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo +
                     300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo))
    goto LAB_0187b258;
    lVar7 = FUN_0187db60(param_1,param_2,plVar2,param_5,local_60);
  }
  return lVar7;
}


