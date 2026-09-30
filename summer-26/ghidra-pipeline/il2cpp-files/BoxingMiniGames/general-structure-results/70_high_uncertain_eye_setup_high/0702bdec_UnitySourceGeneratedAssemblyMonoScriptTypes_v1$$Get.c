/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
ENTRY_POINT: 0702bdec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined8 uVar15;
  long *unaff_x25;
  undefined4 uVar16;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (in_w9 == 0) {
    thunk_FUN_036a1978();
  }
  puVar3 = OVRPlugin_LogLevel_TypeInfo;
  FUN_06e879c8(unaff_w22,0);
  FUN_06e87ec4(*(undefined4 *)(unaff_x19 + 0x58),0);
  lVar10 = *unaff_x25;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar10 = *unaff_x25;
  }
  puVar4 = UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo;
  uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x80);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar3);
  }
  FUN_07208c18(uVar15,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eebec7 == '\0') {
    FUN_03642964(UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecord_TypeInfo);
    DAT_07eebec7 = '\x01';
  }
  puVar3 = Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo;
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar10 = *(long *)puVar4;
  }
  lVar14 = *(long *)puVar3;
  iVar1 = *(int *)(lVar14 + 0xe4);
  *(undefined1 *)(*(long *)(lVar10 + 0xb8) + 8) = 1;
  if (iVar1 == 0) {
    thunk_FUN_036a1978(lVar14);
  }
  puVar5 = OVRPlugin_Mesh_TypeInfo;
  puVar4 = Firebase_FirebaseApp_CreateDelegate_TypeInfo;
  puVar3 = PTR_DAT_07a00fc8;
  FUN_07004ae4(0);
  uVar15 = FUN_06f8b234();
  if (DAT_07eebec8 == '\0') {
    FUN_03642964(UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDevice_TypeInfo);
    DAT_07eebec8 = '\x01';
  }
  puVar11 = (undefined8 *)
            (*(long *)(*(long *)
                        UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDevice_TypeInfo
                      + 0xb8) + 0x28);
  *puVar11 = uVar15;
  thunk_FUN_036b7ad0(puVar11,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_06f15dcc(uVar15,*(undefined8 *)puVar5,0);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  *puVar11 = uVar15;
  thunk_FUN_036b7ad0(puVar11,uVar15);
  lVar10 = FUN_03d1b5c8(*(undefined8 *)puVar4);
  puVar7 = OVRPlugin_MeshType_TypeInfo;
  puVar6 = System_Runtime_InteropServices_Marshal_MarshalerInstanceKeyComparer_TypeInfo;
  puVar11 = (undefined8 *)PTR_DAT_07a2c350;
  puVar5 = PTR_DAT_07a2c348;
  puVar4 = PTR_DAT_079f5008;
  puVar3 = PTR_DAT_079f4540;
  if (lVar10 != 0) {
    bVar9 = FUN_070081e8(lVar10,0);
    uVar15 = *(undefined8 *)puVar7;
    uVar13 = *(undefined8 *)puVar4;
    *(byte *)(*(long *)(*unaff_x25 + 0xb8) + 0x18) = (bVar9 ^ 0xff) & 1;
    if ((bVar9 & 1) == 0) {
      puVar11 = (undefined8 *)puVar5;
    }
    uVar15 = FUN_05c981c8(uVar15,*puVar11,uVar13,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar3);
    }
    puVar3 = Newtonsoft_Json_JsonValidatingReader_TypeInfo;
    FUN_07179300(uVar15,0);
    uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
    FUN_0700bb24(uVar15,0);
    lVar10 = *unaff_x25;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar10 = *unaff_x25;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
    *puVar11 = uVar15;
    thunk_FUN_036b7ad0(puVar11,uVar15);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar10 = FUN_06e96d28(0);
    puVar3 = PTR_DAT_079f4e28;
    if (lVar10 != 0) {
      FUN_06e96da0(lVar10,0);
      FUN_07187df8(*(undefined1 *)(unaff_x19 + 0x68),0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      puVar3 = OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo;
      uVar12 = FUN_071c0684();
      if ((uVar12 & 1) == 0) {
        bVar8 = false;
      }
      else {
        bVar8 = *(int *)(unaff_x19 + 0x74) == 1;
      }
      lVar10 = *(long *)puVar3;
      *(bool *)(unaff_x20 + 0x30) = bVar8;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar10 = FUN_072011a4(0);
      if (lVar10 != 0) {
        *(undefined1 *)(lVar10 + 0x3b) = *(undefined1 *)(unaff_x20 + 0x30);
        lVar10 = FUN_072011a4(0);
        if (lVar10 != 0) {
          cVar2 = *(char *)(unaff_x20 + 0x30);
          *(char *)(lVar10 + 0x26) = cVar2;
          puVar3 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
          if (cVar2 == '\0') {
LAB_0702c1ac:
            if (*(int *)(*(long *)SpectrumKernel_TypeInfo + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            FUN_06f10148(0);
            return;
          }
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (DAT_07eeb188 == '\0') {
            FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
            DAT_07eeb188 = '\x01';
          }
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar10 = *(long *)puVar3;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          uVar16 = *(undefined4 *)(unaff_x19 + 0x80);
          uVar12 = (ulong)CONCAT16((char)((uint)uVar16 >> 0x18),
                                   (uint6)CONCAT14((char)((uint)uVar16 >> 0x10),
                                                   (uint)CONCAT12((char)((uint)uVar16 >> 8),
                                                                  (ushort)(byte)uVar16)));
          NEON_ext(uVar12,uVar12,4,1);
          if (*unaff_x21 != 0) {
            in_stack_00000050 = FUN_06fc1054(*unaff_x21,0);
            thunk_FUN_036b7ad0(&stack0x00000050,in_stack_00000050);
            if (lVar10 != 0) {
              FUN_06eae7f4(lVar10);
              goto LAB_0702c1ac;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


