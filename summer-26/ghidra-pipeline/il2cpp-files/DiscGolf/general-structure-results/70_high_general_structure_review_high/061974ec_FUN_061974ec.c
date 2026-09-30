/*
FUNCTION_NAME: FUN_061974ec
ENTRY_POINT: 061974ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long FUN_061974ec(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  
  puVar2 = PTR_DAT_069feab8;
                    /* try { // try from 061974fc to 0629751b has its CatchHandler @ 06197570 */
  if ((DAT_06dc6927 & 1) == 0) {
                    /* try { // try from 06197520 to 06297537 has its CatchHandler @ 061975ac */
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetIMECursorPositionCommand>__
                );
                    /* try { // try from 06197538 to 0629753b has its CatchHandler @ 061975a8 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetSamplingFrequencyCommand>__
                );
                    /* try { // try from 0619753c to 0629754b has its CatchHandler @ 06196ea4 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<WarpMousePositionCommand>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputDevice_CompareValue__);
    FUN_02d965b8(PTR_DAT_069fc410);
    FUN_02d965b8(PTR_DAT_069feab8);
    FUN_02d965b8(Method_System_Globalization_HijriCalendar_CheckEraRange__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputDevice_ReadValueFromBufferAsObject__);
    DAT_06dc6927 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (param_1 != 0) {
    uVar7 = FUN_0631f7c0(param_1,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xcc),0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06309d28(*(undefined8 *)
                    Method_UnityEngine_InputSystem_InputDevice_ReadValueFromBufferAsObject__,0);
      return param_1;
    }
    iVar5 = FUN_063540b8(param_1,0);
    puVar4 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<WarpMousePositionCommand>__;
    puVar3 = Method_System_Globalization_HijriCalendar_CheckEraRange__;
    iVar15 = 0;
    do {
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar3;
      }
      lVar11 = **(long **)(lVar8 + 0xb8);
      if (lVar11 == 0) break;
      if (*(int *)(lVar11 + 0x18) <= iVar15) {
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc410);
        FUN_0631f050(lVar8,param_1,0);
        if (lVar8 != 0) {
          FUN_063555a4(lVar8,0x3d,0);
          uVar9 = thunk_FUN_06320dfc(param_1,0);
          thunk_FUN_06320ed4(lVar8,uVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_061978bc();
          thunk_FUN_063211ac((float)param_2,lVar8,
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xcc),0);
          thunk_FUN_063211ac(0x40800000,lVar8,
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd4),0);
          lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_InputDevice_CompareValue__);
          FUN_0552aca4(lVar11,0);
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x10) = param_1;
            LeanTween__value((long *)(lVar11 + 0x10),param_1);
            *(long *)(lVar11 + 0x18) = lVar8;
            LeanTween__value((long *)(lVar11 + 0x18),lVar8);
            lVar10 = *(long *)puVar3;
            *(undefined4 *)(lVar11 + 0x20) = 1;
            *(int *)(lVar11 + 0x24) = param_2;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar10 = *(long *)puVar3;
            }
            lVar10 = **(long **)(lVar10 + 0xb8);
            if (lVar10 != 0) {
              lVar12 = *(long *)(lVar10 + 0x10);
              lVar14 = *(long *)
                        Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetIMECursorPositionCommand>__
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar13 = lVar11;
                  LeanTween__value(plVar13,lVar11);
                  return lVar8;
                }
                FUN_040101ec(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                return lVar8;
              }
            }
          }
        }
        break;
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar11 == 0) break;
      }
      lVar8 = FUN_0400ff1c(lVar11,iVar15,*(undefined8 *)puVar4);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) break;
      iVar6 = FUN_063540b8(*(long *)(lVar8 + 0x10),0);
      if (iVar6 == iVar5) {
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar8 = *(long *)puVar3;
        }
        if ((**(long **)(lVar8 + 0xb8) == 0) ||
           (lVar8 = FUN_0400ff1c(**(long **)(lVar8 + 0xb8),iVar15,*(undefined8 *)puVar4), lVar8 == 0
           )) break;
        if (*(int *)(lVar8 + 0x24) == param_2)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001199_PostfixBurstDelegate__BeginInvoke
        ;
      }
      iVar15 = iVar15 + 1;
    } while( true );
  }
LAB_061978b8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();

  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00001199_PostfixBurstDelegate__BeginInvoke
  :
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  if ((**(long **)(lVar8 + 0xb8) != 0) &&
     (lVar8 = FUN_0400ff1c(**(long **)(lVar8 + 0xb8),iVar15,*(undefined8 *)puVar4), lVar8 != 0)) {
    plVar13 = *(long **)(*(long *)puVar3 + 0xb8);
    *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
    if ((*plVar13 != 0) && (lVar8 = FUN_0400ff1c(*plVar13,iVar15,*(undefined8 *)puVar4), lVar8 != 0)
       ) {
      return *(long *)(lVar8 + 0x18);
    }
  }
  goto LAB_061978b8;
}


