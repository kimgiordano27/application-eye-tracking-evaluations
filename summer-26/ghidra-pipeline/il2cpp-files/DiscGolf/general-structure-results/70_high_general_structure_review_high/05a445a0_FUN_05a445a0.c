/*
FUNCTION_NAME: FUN_05a445a0
ENTRY_POINT: 05a445a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05a44970) */
/* WARNING: Removing unreachable block (ram,0x05a44928) */
/* WARNING: Removing unreachable block (ram,0x05a4492c) */

long FUN_05a445a0(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  long local_88;
  
  puVar4 = 
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
  ;
  puVar3 = 
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_TypeInfo;
                    /* try { // try from 05a445b0 to 05b445d7 has its CatchHandler @ 05a44804 */
  if ((DAT_06dc19f2 & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_TransitionRunEvent_<>c_TypeInfo);
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo
                );
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_TypeInfo
                );
    FUN_02d965b8(System_Net_UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_TypeInfo);
    FUN_02d965b8(
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001198_BurstDirectCall_TypeInfo
                );
    DAT_06dc19f2 = 1;
  }
  plVar9 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_0400f984(plVar9,*(undefined8 *)puVar3);
  puVar4 = System_Net_UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID_TypeInfo;
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo;
  if (param_3 != (long *)0x0) {
    plVar10 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Threading_Tasks_ValueTask_ValueTaskSourceAsTask_<>c_TypeInfo
                                        );
    FUN_0400f984(plVar10,*(undefined8 *)puVar4);
    lVar16 = *param_3;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05a44734;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar11 = (undefined8 *)FUN_02dd004c(param_3,*(long *)puVar3,0);
LAB_05a44734:
    puVar5 = 
    Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeInfo;
    puVar4 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
    puVar3 = PTR_DAT_069fbff8;
    plVar12 = (long *)(*(code *)*puVar11)(param_3,puVar11[1]);
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05a447b8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar3,0);
LAB_05a447b8:
      uVar19 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar19 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_05a44948;
        lVar16 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar19 == 0) goto LAB_05a448f8;
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_05a448e0;
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05a4481c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar4,0);
LAB_05a4481c:
      auVar21 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      uVar13 = FUN_05a44f74(param_1,auVar21._0_8_,auVar21._8_8_);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar10;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
            goto LAB_05a44898;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar5,2);
LAB_05a44898:
      (*(code *)*puVar11)(plVar10,uVar13,puVar11[1]);
    } while( true );
  }
  plVar10 = (long *)0x0;
  goto LAB_05a44948;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_05a448e0:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_05a44914;
    }
  }
LAB_05a448f8:
  puVar11 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069fbff0,0);
LAB_05a44914:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_05a44948:
  local_88 = 0;
  bVar2 = true;
  bVar7 = true;
  bVar1 = true;
  lVar16 = 0;
  do {
    if (param_2 == 0) {
LAB_05a44d9c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar8 = FUN_05a4cafc(param_2,0);
    lVar17 = lVar16;
    lVar18 = local_88;
    if (iVar8 == 1) {
      lVar18 = FUN_05a50918(param_2,0);
      lVar17 = FUN_05a4c898(param_2,0);
      bVar6 = false;
      if (bVar1) {
        if (lVar18 == 0) goto LAB_05a44d9c;
        bVar6 = *(int *)(lVar18 + 0x10) == 0;
      }
      bVar1 = bVar6;
      if (bVar7) {
        bVar7 = true;
        if (lVar16 != 0) {
          iVar8 = FUN_0536ada8(lVar16,lVar17,0);
          if (iVar8 != 0) goto LAB_05a44aa0;
          iVar8 = FUN_0536ada8(local_88,lVar18,0);
          bVar7 = iVar8 == 0;
          lVar17 = lVar16;
          lVar18 = local_88;
        }
      }
      else {
LAB_05a44aa0:
        bVar7 = false;
        lVar17 = lVar16;
        lVar18 = local_88;
      }
    }
    else {
      if (iVar8 == 0xf) {
        FUN_05a4cc0c(param_2,0);
        if (lVar16 == 0 || !bVar7) {
          if (bVar1) {
            uVar13 = FUN_05a45068(param_1,plVar10,plVar9);
            lVar16 = FUN_05a437ac(param_1,uVar13,param_4,param_5);
          }
          else if (bVar2) {
            uVar13 = FUN_05a45068(param_1,plVar10,plVar9);
            lVar16 = FUN_05a43a30(param_1,uVar13,param_4,param_5);
          }
          else {
            lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                         UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001198_BurstDirectCall_TypeInfo
                                       );
            FUN_05a2953c(lVar16,0);
            FUN_05a44334(param_1,lVar16,param_4,param_5);
            uVar13 = FUN_05a40824(param_1);
            if (lVar16 == 0) goto LAB_05a44d9c;
            *(undefined8 *)(lVar16 + 0x60) = uVar13;
            LeanTween__value();
            *(long *)(lVar16 + 0x58) = (long)plVar9;
            LeanTween__value((long *)(lVar16 + 0x58),plVar9);
            *(long *)(lVar16 + 0x50) = (long)plVar10;
            LeanTween__value((long *)(lVar16 + 0x50),plVar10);
          }
        }
        else {
          uVar13 = FUN_05a45068(param_1,plVar10,plVar9);
          lVar16 = FUN_05a432e4(param_1,uVar13,param_4,param_5);
        }
        return lVar16;
      }
      uVar19 = FUN_05a509ac(param_2,0);
      if ((uVar19 & 1) != 0) {
        uVar13 = thunk_FUN_02dfd288(PTR_DAT_06a198c0);
        FUN_05a4c638(uVar13,0);
        uVar13 = FUN_05a30660();
        uVar13 = FUN_05a4c63c(uVar13,0);
        uVar14 = thunk_FUN_02dfd288(
                                   Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGLogHelper_SWIGLogDelegate_TypeInfo
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,uVar14);
      }
      uVar19 = FUN_05a4cafc(param_2,0);
      uVar19 = FUN_05a4504c(uVar19,uVar19 & 0xffffffff);
      if ((uVar19 & 1) != 0) {
        bVar7 = false;
        bVar2 = false;
        bVar1 = false;
      }
    }
    local_88 = lVar18;
    plVar12 = (long *)(param_1 + 0x98);
    lVar16 = *plVar12;
    if (lVar16 == 0) {
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   UnityEngine_UIElements_TransitionRunEvent_<>c_TypeInfo);
      FUN_05a0b3f0(lVar16,0);
      *plVar12 = lVar16;
      LeanTween__value(plVar12,lVar16);
      lVar16 = *plVar12;
      if (lVar16 == 0) goto LAB_05a44d9c;
    }
    FUN_05a0ad34(lVar16,param_2,0);
    plVar15 = (long *)FUN_05a40824(param_1);
    if ((plVar15 == (long *)0x0) ||
       (plVar15 = (long *)(**(code **)(*plVar15 + 0x608))
                                    (plVar15,*(undefined8 *)(param_2 + 0x10),
                                     *(undefined8 *)(*plVar15 + 0x610)), plVar9 == (long *)0x0))
    goto LAB_05a44d9c;
    lVar16 = *plVar9;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)
             Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo
           ) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_05a44b98;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_02dd004c(plVar9,*(long *)
                                   Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeInfo
                           ,2);
LAB_05a44b98:
    (*(code *)*puVar11)(plVar9,plVar15,puVar11[1]);
    lVar16 = lVar17;
    if (param_3 == (long *)0x0) {
      lVar17 = *plVar12;
      if (lVar17 == 0) goto LAB_05a44d9c;
      if (*(long *)(lVar17 + 0x20) != 0) {
        if (plVar15 == (long *)0x0) goto LAB_05a44d9c;
        lVar17 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
        lVar18 = *plVar12;
        if ((lVar18 == 0) ||
           (uVar13 = FUN_05a44f74(param_1,*(undefined8 *)(lVar18 + 0x30),
                                  *(undefined8 *)(lVar18 + 0x28)), lVar17 == 0)) goto LAB_05a44d9c;
        FUN_05b9c5a8(lVar17,uVar13,0);
        lVar17 = *plVar12;
        if (lVar17 == 0) goto LAB_05a44d9c;
      }
      if (*(long *)(lVar17 + 0x58) != 0) {
        if (plVar15 == (long *)0x0) goto LAB_05a44d9c;
        lVar17 = (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
        lVar18 = *plVar12;
        if ((lVar18 == 0) ||
           (uVar13 = FUN_05a44f74(param_1,*(undefined8 *)(lVar18 + 0x68),
                                  *(undefined8 *)(lVar18 + 0x60)), lVar17 == 0)) goto LAB_05a44d9c;
        FUN_05b9c5a8(lVar17,uVar13,0);
      }
    }
  } while( true );
}


