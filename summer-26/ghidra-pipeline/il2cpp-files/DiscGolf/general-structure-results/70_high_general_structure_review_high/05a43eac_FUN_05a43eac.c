/*
FUNCTION_NAME: FUN_05a43eac
ENTRY_POINT: 05a43eac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


long FUN_05a43eac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001198_BurstDirectCall_TypeInfo
  ;
  if ((DAT_06dc19f1 & 1) == 0) {
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo
                );
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeInfo
                );
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_TypeInfo
                );
    FUN_02d965b8(System_Net_UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_TypeInfo);
    FUN_02d965b8(
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<int,_TextureHandle>_TypeInfo);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001198_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a115a0);
    FUN_02d965b8(PTR_DAT_06a115b8);
    DAT_06dc19f1 = 1;
  }
  lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_05a2953c(lVar8,0);
  FUN_05a44334(param_1,lVar8,param_3,param_4);
  uVar9 = FUN_05a40824(param_1);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x60) = uVar9;
    LeanTween__value();
    if (param_2 != 0) {
      iVar7 = FUN_05a4cafc(param_2,0);
      if (iVar7 != 0xf) {
        iVar7 = FUN_05a4cbac(param_2,0);
        plVar16 = (long *)0x0;
        if (iVar7 != 3) {
          uVar10 = FUN_05a4cacc(param_2,0);
          puVar6 = System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_TypeInfo;
          puVar5 = System_Net_UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID_TypeInfo;
          puVar4 = 
          Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeInfo;
          puVar3 = System_Collections_Generic_Dictionary<int,_TextureHandle>_TypeInfo;
          puVar2 = PTR_DAT_06a115b8;
          puVar1 = PTR_DAT_06a115a0;
          plVar16 = (long *)0x0;
          if ((uVar10 & 1) != 0) {
            plVar16 = (long *)0x0;
            do {
              uVar9 = FUN_05a50918(param_2,0);
              uVar10 = FUN_0536ba54(uVar9,*(undefined8 *)puVar2,0);
              if (((uVar10 & 1) != 0) &&
                 (uVar10 = FUN_0536ba54(uVar9,*(undefined8 *)puVar1,0), (uVar10 & 1) != 0)) {
                if (plVar16 == (long *)0x0) {
                  plVar16 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                  FUN_0400f984(plVar16,*(undefined8 *)puVar5);
                }
                plVar17 = (long *)FUN_05a40824(param_1);
                if ((plVar17 == (long *)0x0) ||
                   (plVar17 = (long *)(**(code **)(*plVar17 + 0x608))
                                                (plVar17,*(undefined8 *)(param_2 + 0x10),
                                                 *(undefined8 *)(*plVar17 + 0x610)),
                   plVar16 == (long *)0x0)) goto LAB_05a4428c;
                if (plVar17 != (long *)0x0) {
                  lVar14 = *(long *)puVar3;
                  if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                               -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96be0(plVar17,lVar14);
                  }
                }
                lVar14 = *plVar16;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 != 0) {
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                      puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_05a4412c;
                    }
                    uVar10 = uVar10 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_02dd004c(plVar16,*(long *)puVar4,2);
LAB_05a4412c:
                (*(code *)*puVar12)(plVar16,plVar17,puVar12[1]);
              }
              uVar10 = FUN_05a4cacc(param_2,0);
            } while ((uVar10 & 1) != 0);
          }
          FUN_05a4277c(param_2);
        }
        iVar7 = FUN_05a4cbac(param_2,0);
        puVar3 = 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
        ;
        puVar2 = 
        Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_TypeInfo
        ;
        puVar1 = 
        Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo;
        plVar17 = (long *)0x0;
        if (iVar7 != 0xf) {
          plVar17 = (long *)0x0;
          do {
            uVar10 = FUN_05a509ac(param_2,0);
            if ((uVar10 & 1) != 0) {
              uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a198c0);
              FUN_05a4c638(uVar9,0);
              uVar9 = FUN_05a30660();
              uVar9 = FUN_05a4c63c(uVar9,0);
              uVar13 = thunk_FUN_02dfd288(
                                         Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeInfo
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar9,uVar13);
            }
            if (plVar17 == (long *)0x0) {
              plVar17 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar3);
              FUN_0400f984(plVar17,*(undefined8 *)puVar2);
            }
            plVar11 = (long *)FUN_05a40824(param_1);
            if ((plVar11 == (long *)0x0) ||
               (uVar9 = (**(code **)(*plVar11 + 0x608))
                                  (plVar11,*(undefined8 *)(param_2 + 0x10),
                                   *(undefined8 *)(*plVar11 + 0x610)), plVar17 == (long *)0x0))
            goto LAB_05a4428c;
            lVar14 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_05a4421c;
                }
                uVar10 = uVar10 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(plVar17,*(long *)puVar1,2);
LAB_05a4421c:
            (*(code *)*puVar12)(plVar17,uVar9,puVar12[1]);
            iVar7 = FUN_05a4cbac(param_2,0);
          } while (iVar7 != 0xf);
        }
        FUN_05a4cc0c(param_2,0);
        *(undefined8 *)(lVar8 + 0x50) = plVar16;
        LeanTween__value((undefined8 *)(lVar8 + 0x50),plVar16);
        *(undefined8 *)(lVar8 + 0x58) = plVar17;
        LeanTween__value((undefined8 *)(lVar8 + 0x58),plVar17);
      }
      return lVar8;
    }
  }
LAB_05a4428c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


