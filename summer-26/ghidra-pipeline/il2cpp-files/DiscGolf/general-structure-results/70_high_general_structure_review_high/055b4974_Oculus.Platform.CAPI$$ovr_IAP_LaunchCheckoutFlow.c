/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_IAP_LaunchCheckoutFlow
ENTRY_POINT: 055b4974
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined4 Oculus_Platform_CAPI__ovr_IAP_LaunchCheckoutFlow(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *plVar13;
  undefined1 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *plVar14;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_02d965b8();
  FUN_02d965b8(
              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
              );
  FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo);
  FUN_02d965b8(
              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_TypeInfo
              );
  *(undefined1 *)(unaff_x22 + 0x63f) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  *unaff_x26 = 0;
  LeanTween__value();
  *unaff_x28 = 0;
  *unaff_x25 = 0;
  LeanTween__value();
  *unaff_x29 = 0;
  *unaff_x24 = 0;
  if (unaff_x19 != 0) {
    if (*(char *)(unaff_x19 + 0x80) != '\0') {
      return 1;
    }
    if (in_stack_00000018 != (long *)0x0) {
      iVar3 = (**(code **)(*in_stack_00000018 + 0x188))
                        (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 400));
      plVar14 = (long *)(unaff_x19 + 0x48);
      if (*plVar14 == 0) {
        uVar6 = FUN_055ae608();
        *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
        LeanTween__value(plVar14,uVar6);
      }
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xa0);
      if (*(long *)(unaff_x21 + 0x20) != 0) {
        iVar4 = FUN_043301f4(&stack0x00000028,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x24),
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                            );
        if ((iVar4 != 2) &&
           ((((iVar3 - 1U < 2 || (*unaff_x27 != 0)) && (*(char *)(unaff_x19 + 0x81) != '\0')) &&
            ((*plVar14 == 0 || (*(int *)(*plVar14 + 0x24) != 8)))))) {
          plVar13 = *(long **)(unaff_x19 + 0x68);
          if (plVar13 == (long *)0x0) goto LAB_055b4e64;
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)
                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                 ) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_055b4af4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02dd004c(plVar13,*(long *)
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                                ,1);
LAB_055b4af4:
          lVar10 = (*(code *)*puVar7)(plVar13);
          *unaff_x26 = lVar10;
          LeanTween__value();
          *unaff_x29 = 1;
          if (*unaff_x26 != 0) {
            thunk_FUN_02da6564(*unaff_x26,0);
            lVar10 = FUN_055ae66c();
            *unaff_x25 = lVar10;
            LeanTween__value();
            lVar10 = *unaff_x25;
            if (lVar10 == 0) goto LAB_055b4e64;
            if (*(char *)(lVar10 + 0x28) == '\0') {
              bVar2 = FUN_05598144(*(undefined8 *)(lVar10 + 0x60),0);
              bVar2 = (bVar2 ^ 0xff) & 1;
            }
            else {
              bVar2 = 0;
            }
            *unaff_x28 = bVar2;
          }
        }
        puVar1 = System_Net_ServicePoint_var;
        if ((*(char *)(unaff_x19 + 0x82) == '\0') && (*unaff_x28 == 0)) {
          plVar14 = *(long **)(unaff_x21 + 0x28);
          if (plVar14 != (long *)0x0) {
            lVar10 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)System_Net_ServicePoint_var) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_055b4d84;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)System_Net_ServicePoint_var,0);
LAB_055b4d84:
            iVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
            if (2 < iVar3) {
              lVar10 = *(long *)(unaff_x21 + 0x28);
              uVar6 = (**(code **)(*in_stack_00000018 + 0x1c8))
                                (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1d0));
              if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
              }
              uVar8 = FUN_0547e2f8(0);
              uVar8 = FUN_05588558(*(undefined8 *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_TypeInfo
                                   ,uVar8,*(undefined8 *)(unaff_x19 + 0x30),
                                   *(undefined8 *)(unaff_x19 + 0x50),0);
              if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
              }
              uVar9 = thunk_FUN_02dd3048(in_stack_00000018,
                                         *(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
              uVar6 = FUN_05570ab4(uVar9,uVar6,uVar8,0);
              if (lVar10 != 0) {
                FUN_02cfc328(1,*(undefined8 *)puVar1,lVar10,3,uVar6,0);
                return 1;
              }
              goto LAB_055b4e64;
            }
          }
          return 1;
        }
        if ((iVar3 == 0xb) && (iVar4 = FUN_055ac134(), iVar4 == 1)) {
LAB_055b4c40:
          *unaff_x24 = 1;
          return 1;
        }
        puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo;
        in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
        if (*(long *)(unaff_x21 + 0x20) != 0) {
          uVar11 = FUN_043301f4(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c)
                                ,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                               );
          if ((uVar11 & 1) != 0) {
            in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
            if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b4e64;
            uVar5 = FUN_043301f4(&stack0x00000020,
                                 *(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                                 *(undefined8 *)puVar1);
            if (((uVar5 >> 1 & 1) == 0) && (uVar11 = FUN_05595c44(iVar3,0), (uVar11 & 1) != 0)) {
              uVar6 = (**(code **)(*in_stack_00000018 + 0x198))
                                (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1a0));
              uVar8 = FUN_055ab994();
              uVar11 = FUN_05596184(uVar6,uVar8,0);
              if ((uVar11 & 1) != 0) goto LAB_055b4c40;
            }
          }
          if (*unaff_x26 == 0) {
            *unaff_x25 = *plVar14;
          }
          else {
            thunk_FUN_02da6564(*unaff_x26,0);
            lVar10 = FUN_055ae66c();
            *unaff_x25 = lVar10;
            LeanTween__value();
            if (*unaff_x25 == *plVar14) {
              return 0;
            }
            lVar10 = FUN_055aea4c();
            *unaff_x27 = lVar10;
          }
          LeanTween__value();
          return 0;
        }
      }
    }
  }
LAB_055b4e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


