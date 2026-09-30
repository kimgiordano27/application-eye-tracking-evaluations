/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$ExceptionToTraceString
ENTRY_POINT: 05415990
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__ExceptionToTraceString(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x19;
  long *plVar15;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar16;
  int unaff_w26;
  uint uVar17;
  long unaff_x27;
  long *plVar18;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x05415990:
  FUN_04e97bc4(unaff_x23,param_1,0);
  plVar18 = (long *)PTR_DAT_0678fcf8;
  do {
    uVar17 = (uint)unaff_x27;
                    /* try { // try from 054159ac to 055159eb has its CatchHandler @ 05415ae0 */
    if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_05415b5c;
    plVar16 = (long *)(unaff_x19 + (long)(int)uVar17 * 8 + 0x20);
    plVar11 = (long *)*plVar16;
    if (plVar11 == (long *)0x0) goto LAB_05415b58;
    iVar2 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
    if (iVar2 == 2) {
LAB_054159fc:
      FUN_04e98e18(unaff_x23,0,0x40,0);
    }
    else {
      if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_05415b5c;
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) goto LAB_05415b58;
      iVar2 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                    /* try { // try from 054159f4 to 05515a13 has its CatchHandler @ 05415adc */
      if (iVar2 == 4) goto LAB_054159fc;
    }
                    /* try { // try from 05415a14 to 05515ab3 has its CatchHandler @ 05415840 */
    plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar12 = (**(code **)(*unaff_x23 + 0x168))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x170));
    if (plVar11 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*plVar11 + 0x518))
              (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar12,
               *(undefined8 *)(*plVar11 + 0x520));
    (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar11,*(undefined8 *)(*unaff_x29 + 0x2e0));
    unaff_x27 = unaff_x27 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= (int)unaff_x27) {
      do {
        do {
          plVar11 = *(long **)(unaff_x22 + 0x78);
          if (plVar11 == (long *)0x0) goto LAB_05415b58;
                    /* try { // try from 05415ab4 to 05515ab7 has its CatchHandler @ 05415ad4 */
                    /* try { // try from 05415ab8 to 05515abb has its CatchHandler @ 05415ad0 */
                    /* try { // try from 05415abc to 05515abf has its CatchHandler @ 05415840 */
                    /* try { // try from 05415ac0 to 05515ac3 has its CatchHandler @ 05415acc */
                    /* try { // try from 05415ac4 to 05515aef has its CatchHandler @ 05415840 */
          (**(code **)(*plVar11 + 0x2a8))
                    (plVar11,unaff_x29,*(undefined8 *)(unaff_x22 + 0x80),
                     *(undefined8 *)(*plVar11 + 0x2b0));
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05415ac0 with catch @ 05415acc
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05415ab8 with catch @ 05415ad0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05415ab4 with catch @ 05415ad4
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05415950 with catch @ 05415ad8
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 054159f4 with catch @ 05415adc
                        */
          plVar11 = (long *)PTR_DAT_0678fd00;
LAB_05415ae0:
          do {
            do {
              do {
                do {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 054159ac with catch @ 05415ae0
                        */
                  unaff_w26 = unaff_w26 + 1;
                    /* try { // try from 05415af0 to 05515af3 has its CatchHandler @ 05415b04 */
                  iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
                  if (iVar2 <= unaff_w26) {
                    /* catch() { ... } // from try @ 05415af0 with catch @ 05415b04 */
                    FUN_0540ade0(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
                    return in_stack_00000018;
                  }
                  plVar16 = (long *)FUN_053b5a7c();
                  if (plVar16 != (long *)0x0) {
                    bVar1 = *(byte *)(*plVar11 + 0x130);
                    if ((bVar1 <= *(byte *)(*plVar16 + 0x130)) &&
                       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) == *plVar11)) {
                      plVar16 = (long *)FUN_053b5a7c();
                      if (plVar16 == (long *)0x0) {
                        uVar4 = FUN_054182e0();
                        if ((uVar4 & 1) == 0) goto LAB_05415b58;
                      }
                      else {
                        bVar1 = *(byte *)(*plVar11 + 0x130);
                        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11
                           )) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d60e88(plVar16);
                        }
                        uVar4 = FUN_054182e0();
                        if ((uVar4 & 1) == 0) {
                          lVar5 = plVar16[7];
                          plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                            uVar12 = FUN_0537e8d8(in_stack_00000020,0);
                            if (plVar18 == (long *)0x0) goto LAB_05415b58;
                            (**(code **)(*plVar18 + 0x558))
                                      (plVar18,*(undefined8 *)
                                                System_ComponentModel_DoubleConverter_var,
                                       *(undefined8 *)PTR_DAT_067900f8,uVar12,
                                       *(undefined8 *)(*plVar18 + 0x560));
                          }
                          else {
                            lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                            if (lVar6 == 0) goto LAB_05415b58;
                            iVar2 = FUN_053c77c0(lVar6,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                            if (iVar2 == -3) goto LAB_05414860;
                          }
                          uVar12 = FUN_053b56cc(plVar16,0);
                          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                          }
                          uVar12 = FUN_0566e328(uVar12,0);
                          if (plVar18 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar18 + 0x518))
                                    (plVar18,*(undefined8 *)PTR_DAT_0676b5d0,uVar12,
                                     *(undefined8 *)(*plVar18 + 0x520));
                          uVar12 = (**(code **)(*plVar16 + 0x178))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x180));
                          uVar10 = FUN_053b56cc(plVar16,0);
                          uVar4 = FUN_04e8c024(uVar12,uVar10,0);
                          if ((uVar4 & 1) != 0) {
                            uVar12 = (**(code **)(*plVar16 + 0x178))
                                               (plVar16,*(undefined8 *)(*plVar16 + 0x180));
                            (**(code **)(*plVar18 + 0x558))
                                      (plVar18,*(undefined8 *)
                                                Unity_VisualScripting_DoNotSerializeAttribute_var,
                                       *(undefined8 *)PTR_DAT_067900f8,uVar12,
                                       *(undefined8 *)(*plVar18 + 0x560));
                          }
                          FUN_0540ade0(plVar16[6],plVar18,0);
                          plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar12 = FUN_053868f0(in_stack_00000020,0);
                          uVar12 = FUN_04e8db00(*(undefined8 *)
                                                 System_ComponentModel_GuidConverter_var,
                                                in_stack_00000030,uVar12,0);
                          if (plVar11 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar11 + 0x518))
                                    (plVar11,*(undefined8 *)
                                              UnityEngine_InputSystem_GravitySensor_var,uVar12,
                                     *(undefined8 *)(*plVar11 + 0x520));
                          (**(code **)(*plVar18 + 0x2d8))
                                    (plVar18,plVar11,*(undefined8 *)(*plVar18 + 0x2e0));
                          uVar4 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                            (plVar16,0);
                          if ((uVar4 & 1) != 0) {
                            (**(code **)(*plVar18 + 0x558))
                                      (plVar18,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var
                                       ,*(undefined8 *)PTR_DAT_067900f8,
                                       *(undefined8 *)PTR_DAT_06771b30,
                                       *(undefined8 *)(*plVar18 + 0x560));
                          }
                          if (lVar5 == 0) goto LAB_05415b58;
                          if (*(long *)(lVar5 + 0x18) != 0) {
                            plVar11 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                            FUN_04e9624c(plVar11,0);
                            if (0 < *(int *)(lVar5 + 0x18)) {
                              if (plVar11 == (long *)0x0) goto LAB_05415b58;
                              lVar6 = 0;
                              do {
                                FUN_04e97278(plVar11,0,0);
                                uVar17 = (uint)lVar6;
                                if (*(int *)(unaff_x22 + 0x5c) == 2) {
                                  plVar16 = (long *)FUN_04e97bc4(plVar11,in_stack_00000030,0);
                                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                  lVar9 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
                                  if ((lVar9 == 0) ||
                                     (uVar12 = FUN_05397bec(lVar9,0), plVar16 == (long *)0x0))
                                  goto LAB_05415b58;
                                }
                                else {
                                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                  plVar16 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                                  if (*plVar16 == 0) goto LAB_05415b58;
                                  FUN_05399824(*plVar16,0);
                                  FUN_05416194();
                                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                  if (*plVar16 == 0) goto LAB_05415b58;
                                  uVar12 = FUN_05399824(*plVar16,0);
                                  uVar4 = FUN_04e8cf70(uVar12,0);
                                  if ((uVar4 & 1) == 0) {
                                    if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                    if (*plVar16 == 0) goto LAB_05415b58;
                                    plVar3 = *(long **)(unaff_x22 + 0x28);
                                    uVar12 = FUN_05399824(*plVar16,0);
                                    if (plVar3 == (long *)0x0) goto LAB_05415b58;
                                    uVar12 = (**(code **)(*plVar3 + 0x308))
                                                       (plVar3,uVar12,
                                                        *(undefined8 *)(*plVar3 + 0x310));
                                    lVar9 = FUN_04e98bb0(plVar11,uVar12,0);
                                    if (lVar9 == 0) goto LAB_05415b58;
                                    FUN_04e98a58(lVar9,0x3a,0);
                                  }
                                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                  if (*plVar16 == 0) goto LAB_05415b58;
                                  uVar12 = FUN_05397bec(*plVar16,0);
                                  plVar16 = plVar11;
                                }
                                FUN_04e97bc4(plVar16,uVar12,0);
                                if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                plVar3 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                                plVar16 = (long *)*plVar3;
                                if (plVar16 == (long *)0x0) goto LAB_05415b58;
                                iVar2 = (**(code **)(*plVar16 + 0x1d8))
                                                  (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                                if (iVar2 == 2) {
LAB_05414c38:
                                  FUN_04e98e18(plVar11,0,0x40,0);
                                }
                                else {
                                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                  plVar3 = (long *)*plVar3;
                                  if (plVar3 == (long *)0x0) goto LAB_05415b58;
                                  iVar2 = (**(code **)(*plVar3 + 0x1d8))
                                                    (plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
                                  if (iVar2 == 4) goto LAB_05414c38;
                                }
                                plVar16 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                                uVar12 = (**(code **)(*plVar11 + 0x168))
                                                   (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                                if (plVar16 == (long *)0x0) goto LAB_05415b58;
                                (**(code **)(*plVar16 + 0x518))
                                          (plVar16,*(undefined8 *)
                                                    UnityEngine_InputSystem_GravitySensor_var,uVar12
                                           ,*(undefined8 *)(*plVar16 + 0x520));
                                (**(code **)(*plVar18 + 0x2d8))
                                          (plVar18,plVar16,*(undefined8 *)(*plVar18 + 0x2e0));
                                lVar6 = lVar6 + 1;
                              } while ((int)lVar6 < *(int *)(lVar5 + 0x18));
                            }
                          }
                          plVar11 = *(long **)(unaff_x22 + 0x78);
                          if (plVar11 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar11 + 0x298))
                                    (plVar11,plVar18,*(undefined8 *)(unaff_x22 + 0x80),
                                     *(undefined8 *)(*plVar11 + 0x2a0));
                          plVar11 = (long *)PTR_DAT_0678fd00;
                          plVar18 = (long *)PTR_DAT_0678fcf8;
                        }
                      }
                      goto LAB_05415ae0;
                    }
                  }
                  plVar16 = (long *)FUN_053b5a7c();
                } while (plVar16 == (long *)0x0);
                bVar1 = *(byte *)(*plVar18 + 0x130);
              } while (((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *plVar18))
                      || ((in_stack_00000028 & 0x100000000) == 0));
              plVar16 = (long *)FUN_053b5a7c();
              if (plVar16 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar18 + 0x130);
                if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *plVar18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar16);
                }
              }
              plVar3 = *(long **)(unaff_x22 + 0x38);
              if (plVar3 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
              if (iVar2 < 1) {
                uVar4 = FUN_054182e0();
                if ((uVar4 & 1) == 0) {
                  if (plVar16 == (long *)0x0) goto LAB_05415b58;
                  goto LAB_05414d3c;
                }
                goto LAB_05415ae0;
              }
              if (plVar16 == (long *)0x0) goto LAB_05415b58;
              plVar11 = *(long **)(unaff_x22 + 0x38);
              uVar12 = (**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(*plVar16 + 0x2d0));
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              uVar4 = (**(code **)(*plVar11 + 0x348))
                                (plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x350));
              plVar11 = (long *)PTR_DAT_0678fd00;
            } while ((uVar4 & 1) == 0);
            plVar11 = *(long **)(unaff_x22 + 0x38);
            uVar12 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if (plVar11 == (long *)0x0) goto LAB_05415b58;
            uVar4 = (**(code **)(*plVar11 + 0x348))
                              (plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x350));
            plVar11 = (long *)PTR_DAT_0678fd00;
          } while (((uVar4 & 1) == 0) || (uVar4 = FUN_054182e0(), (uVar4 & 1) != 0));
LAB_05414d3c:
          plVar11 = (long *)FUN_053e1128(plVar16,0);
          lVar5 = FUN_053e0970(plVar16,0);
          lVar6 = (**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(*plVar16 + 0x2d0));
          if (lVar6 == 0) goto LAB_05415b58;
          lVar6 = *(long *)(lVar6 + 0x48);
          uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
          FUN_053eb24c(uVar12,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar5,0);
          if (lVar6 == 0) goto LAB_05415b58;
          plVar3 = (long *)FUN_053b6184(lVar6,uVar12,0);
          if (plVar3 == (long *)0x0) {
            plVar18 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar12 = FUN_053b56cc(plVar16,0);
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar12 = FUN_0566e328(uVar12,0);
            if (plVar18 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar18 + 0x518))
                      (plVar18,*(undefined8 *)PTR_DAT_0676b5d0,uVar12,
                       *(undefined8 *)(*plVar18 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
              uVar12 = FUN_0537e8d8(in_stack_00000020,0);
              (**(code **)(*plVar18 + 0x558))
                        (plVar18,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar12,*(undefined8 *)(*plVar18 + 0x560));
            }
            else {
              lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar6 == 0) goto LAB_05415b58;
              iVar2 = FUN_053c77c0(lVar6,*(undefined8 *)(in_stack_00000020 + 0x90),0);
              if (iVar2 == -3) goto LAB_05414edc;
            }
            plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar6 = (**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(*plVar16 + 0x2d0));
            if (lVar6 == 0) goto LAB_05415b58;
            uVar12 = FUN_053868f0(lVar6,0);
            uVar12 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                  in_stack_00000030,uVar12,0);
            if (plVar7 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar7 + 0x518))
                      (plVar7,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar12,
                       *(undefined8 *)(*plVar7 + 0x520));
            (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar7,*(undefined8 *)(*plVar18 + 0x2e0));
            if (lVar5 == 0) goto LAB_05415b58;
            if (*(long *)(lVar5 + 0x18) != 0) {
              plVar7 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
              FUN_04e9624c(plVar7,0);
              if (0 < *(int *)(lVar5 + 0x18)) {
                if (plVar7 == (long *)0x0) goto LAB_05415b58;
                lVar6 = 0;
                do {
                  FUN_04e97278(plVar7,0,0);
                  uVar17 = (uint)lVar6;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar8 = (long *)FUN_04e97bc4(plVar7,in_stack_00000030,0);
                    if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                    lVar9 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
                    if ((lVar9 == 0) || (uVar12 = FUN_05397bec(lVar9,0), plVar8 == (long *)0x0))
                    goto LAB_05415b58;
                  }
                  else {
                    if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                    plVar8 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                    if (*plVar8 == 0) goto LAB_05415b58;
                    FUN_05399824(*plVar8,0);
                    FUN_05416194();
                    if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                    if (*plVar8 == 0) goto LAB_05415b58;
                    uVar12 = FUN_05399824(*plVar8,0);
                    uVar4 = FUN_04e8cf70(uVar12,0);
                    if ((uVar4 & 1) == 0) {
                      if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                      if (*plVar8 == 0) goto LAB_05415b58;
                      plVar15 = *(long **)(unaff_x22 + 0x28);
                      uVar12 = FUN_05399824(*plVar8,0);
                      if (plVar15 == (long *)0x0) goto LAB_05415b58;
                      uVar12 = (**(code **)(*plVar15 + 0x308))
                                         (plVar15,uVar12,*(undefined8 *)(*plVar15 + 0x310));
                      lVar9 = FUN_04e98bb0(plVar7,uVar12,0);
                      if (lVar9 == 0) goto LAB_05415b58;
                      FUN_04e98a58(lVar9,0x3a,0);
                    }
                    if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                    if (*plVar8 == 0) goto LAB_05415b58;
                    uVar12 = FUN_05397bec(*plVar8,0);
                    plVar8 = plVar7;
                  }
                  FUN_04e97bc4(plVar8,uVar12,0);
                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                  plVar15 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                  plVar8 = (long *)*plVar15;
                  if (plVar8 == (long *)0x0) goto LAB_05415b58;
                  iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                  if (iVar2 == 2) {
LAB_054151a8:
                    FUN_04e98e18(plVar7,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                    plVar15 = (long *)*plVar15;
                    if (plVar15 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                    if (iVar2 == 4) goto LAB_054151a8;
                  }
                  plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  if (plVar8 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar8 + 0x518))
                            (plVar8,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar12,
                             *(undefined8 *)(*plVar8 + 0x520));
                  (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar8,*(undefined8 *)(*plVar18 + 0x2e0));
                  lVar6 = lVar6 + 1;
                } while ((int)lVar6 < *(int *)(lVar5 + 0x18));
              }
            }
            plVar7 = *(long **)(unaff_x22 + 0x78);
            if (plVar7 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar7 + 0x298))
                      (plVar7,plVar18,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar7 + 0x2a0));
            plVar18 = (long *)PTR_DAT_0678fcf8;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
            if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar3);
            }
          }
          unaff_x29 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar12 = FUN_053b56cc(plVar16,0);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
          }
          uVar12 = FUN_0566e328(uVar12,0);
          if (unaff_x29 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*unaff_x29 + 0x518))
                    (unaff_x29,*(undefined8 *)PTR_DAT_0676b5d0,uVar12,
                     *(undefined8 *)(*unaff_x29 + 0x520));
          if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
            lVar5 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if (lVar5 == 0) goto LAB_05415b58;
            uVar12 = FUN_0537e8d8(lVar5,0);
            (**(code **)(*unaff_x29 + 0x558))
                      (unaff_x29,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar12,*(undefined8 *)(*unaff_x29 + 0x560));
          }
          else {
            lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
            lVar5 = (**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(*plVar16 + 0x2d0));
            if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_05415b58;
            iVar2 = FUN_053c77c0(lVar6,*(undefined8 *)(lVar5 + 0x90),0);
            if (iVar2 == -3) goto LAB_05415360;
          }
          plVar7 = plVar16;
          if (plVar3 != (long *)0x0) {
            plVar7 = plVar3;
          }
          uVar12 = FUN_053b56cc(plVar7,0);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
          }
          uVar12 = FUN_0566e328(uVar12,0);
          (**(code **)(*unaff_x29 + 0x518))
                    (unaff_x29,*(undefined8 *)PTR_DAT_06790b00,uVar12,
                     *(undefined8 *)(*unaff_x29 + 0x520));
          lVar5 = plVar16[6];
          uVar12 = *(undefined8 *)PTR_DAT_06791188;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar12 = FUN_05015c2c(uVar12,0);
          FUN_0540ade0(lVar5,unaff_x29,uVar12);
          uVar12 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
          uVar10 = FUN_053b56cc(plVar16,0);
          uVar4 = FUN_04e8c024(uVar12,uVar10,0);
          if ((uVar4 & 1) != 0) {
            uVar12 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
            (**(code **)(*unaff_x29 + 0x558))
                      (unaff_x29,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar12,*(undefined8 *)(*unaff_x29 + 0x560));
          }
          if (plVar11 == (long *)0x0) {
            lVar5 = *unaff_x29;
            uVar10 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
            uVar13 = *(undefined8 *)PTR_DAT_067900f8;
            uVar14 = *(undefined8 *)(lVar5 + 0x560);
            uVar12 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
            (**(code **)(lVar5 + 0x558))(unaff_x29,uVar10,uVar13,uVar12,uVar14);
          }
          else {
            uVar4 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
            if ((uVar4 & 1) != 0) {
              (**(code **)(*unaff_x29 + 0x558))
                        (unaff_x29,
                         *(undefined8 *)System_Runtime_CompilerServices_DecimalConstantAttribute_var
                         ,*(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                         *(undefined8 *)(*unaff_x29 + 0x560));
            }
            lVar5 = plVar11[3];
            uVar12 = *(undefined8 *)UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var
            ;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar12 = FUN_05015c2c(uVar12,0);
            FUN_0540ade0(lVar5,unaff_x29,uVar12);
            uVar12 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
            uVar10 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
            uVar4 = FUN_04e8c024(uVar12,uVar10,0);
            if ((uVar4 & 1) != 0) {
              uVar12 = (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar12 = FUN_0566e328(uVar12,0);
              lVar5 = *unaff_x29;
              uVar10 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
              uVar14 = *(undefined8 *)(lVar5 + 0x560);
              uVar13 = *(undefined8 *)PTR_DAT_067900f8;
              goto LAB_0541562c;
            }
          }
          plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar12 = FUN_053868f0(in_stack_00000020,0);
          uVar12 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                in_stack_00000030,uVar12,0);
          if (plVar11 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar11 + 0x518))
                    (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar12,
                     *(undefined8 *)(*plVar11 + 0x520));
          (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar11,*(undefined8 *)(*unaff_x29 + 0x2e0));
          iVar2 = (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
          if (iVar2 != 0) {
            (**(code **)(*plVar16 + 0x278))(plVar16,*(undefined8 *)(*plVar16 + 0x280));
            uVar12 = FUN_05417bfc();
            (**(code **)(*unaff_x29 + 0x558))
                      (unaff_x29,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar12,*(undefined8 *)(*unaff_x29 + 0x560));
          }
          iVar2 = (**(code **)(*plVar16 + 0x2d8))(plVar16,*(undefined8 *)(*plVar16 + 0x2e0));
          if (iVar2 != 1) {
            (**(code **)(*plVar16 + 0x2d8))(plVar16,*(undefined8 *)(*plVar16 + 0x2e0));
            uVar12 = FUN_05417c6c();
            (**(code **)(*unaff_x29 + 0x558))
                      (unaff_x29,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar12,*(undefined8 *)(*unaff_x29 + 0x560));
          }
          iVar2 = (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0));
          if (iVar2 != 1) {
            (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0));
            uVar12 = FUN_05417c6c();
            (**(code **)(*unaff_x29 + 0x558))
                      (unaff_x29,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar12,*(undefined8 *)(*unaff_x29 + 0x560));
          }
          unaff_x19 = (**(code **)(*plVar16 + 0x268))(plVar16,*(undefined8 *)(*plVar16 + 0x270));
          if (unaff_x19 == 0) goto LAB_05415b58;
        } while (*(long *)(unaff_x19 + 0x18) == 0);
        unaff_x23 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
        FUN_04e9624c(unaff_x23,0);
      } while (*(int *)(unaff_x19 + 0x18) < 1);
      if (unaff_x23 == (long *)0x0) goto LAB_05415b58;
      unaff_x27 = 0;
      unaff_x20 = unaff_x19 + 0x20;
    }
    FUN_04e97278(unaff_x23,0,0);
    uVar17 = (uint)unaff_x27;
    if (*(int *)(unaff_x22 + 0x5c) != 2) break;
    lVar5 = FUN_04e97bc4(unaff_x23,in_stack_00000030,0);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_05415b5c;
    lVar6 = *(long *)(unaff_x20 + unaff_x27 * 8);
    if ((lVar6 == 0) || (uVar12 = FUN_05397bec(lVar6,0), lVar5 == 0)) goto LAB_05415b58;
    FUN_04e97bc4(lVar5,uVar12,0);
  } while( true );
  if (uVar17 < *(uint *)(unaff_x19 + 0x18)) {
    plVar18 = (long *)(unaff_x19 + (long)(int)uVar17 * 8 + 0x20);
    if (*plVar18 == 0) goto LAB_05415b58;
    FUN_05399824(*plVar18,0);
    FUN_05416194();
    if (uVar17 < *(uint *)(unaff_x19 + 0x18)) {
      if (*plVar18 == 0) goto LAB_05415b58;
      uVar12 = FUN_05399824(*plVar18,0);
      uVar4 = FUN_04e8cf70(uVar12,0);
      if ((uVar4 & 1) == 0) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_05415b5c;
        if (*plVar18 == 0) {
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar11 = *(long **)(unaff_x22 + 0x28);
        uVar12 = FUN_05399824(*plVar18,0);
        if (plVar11 == (long *)0x0) goto LAB_05415b58;
        uVar12 = (**(code **)(*plVar11 + 0x308))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x310));
        lVar5 = FUN_04e98bb0(unaff_x23,uVar12,0);
        if (lVar5 == 0) goto LAB_05415b58;
        FUN_04e98a58(lVar5,0x3a,0);
      }
      if (uVar17 < *(uint *)(unaff_x19 + 0x18)) {
        if (*plVar18 == 0) goto LAB_05415b58;
        param_1 = FUN_05397bec(*plVar18,0);
        goto code_r0x05415990;
      }
    }
  }
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


