/*
FUNCTION_NAME: FUN_06abb8f4
ENTRY_POINT: 06abb8f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_15;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06abbbd0) */
/* WARNING: Removing unreachable block (ram,0x06abbc40) */

undefined4 FUN_06abb8f4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_076e3129 & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<DictationSession>_Invoke__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<DictationSession>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_AddListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_Invoke__);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_RemoveListener__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<FocusExitEventArgs>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    DAT_076e3129 = 1;
  }
  if (param_1[0x45] == 0) goto LAB_06abbc38;
  iVar3 = FUN_056284ac(param_1[0x45],
                       *(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_Invoke__);
  iVar4 = (**(code **)(*param_1 + 0x728))(param_1,*(undefined8 *)(*param_1 + 0x730));
  if (iVar4 <= iVar3) {
    return 0;
  }
  if (param_1[0x45] == 0) goto LAB_06abbc38;
  uVar5 = FUN_05628ad4(param_1[0x45],param_2,
                       *(undefined8 *)
                        Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_AddListener__);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if ((0 < iVar3) &&
     (uVar5 = (**(code **)(*param_1 + 0x738))(param_1,*(undefined8 *)(*param_1 + 0x740)),
     (uVar5 & 1) != 0)) {
    if ((param_1[0x45] != 0) && (plVar9 = *(long **)(param_1[0x45] + 0x10), plVar9 != (long *)0x0))
    {
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_RemoveListener__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06abba6c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_032937ac(plVar9,*(long *)
                                    Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_RemoveListener__
                            ,0);
LAB_06abba6c:
      plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
      puVar2 = Method_UnityEngine_Events_UnityEvent<FocusExitEventArgs>__ctor__;
      puVar1 = PTR_DAT_0727a180;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      do {
        lVar7 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06abbadc;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar1,0);
LAB_06abbadc:
        uVar5 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_06abbbc4;
          lVar7 = *plVar9;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 == 0) goto LAB_06abbb9c;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_06abbb84;
        }
        lVar7 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06abbb38;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar2,0);
LAB_06abbb38:
        lVar7 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06a840f0(lVar7,param_1[0x44],0);
      } while( true );
    }
    goto LAB_06abbc38;
  }
  goto LAB_06abbbec;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
LAB_06abbb84:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06abbbb8;
    }
  }
LAB_06abbb9c:
  puVar6 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07279f60,0);
LAB_06abbbb8:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_06abbbc4:
  if (param_1[0x45] == 0) goto LAB_06abbc38;
  FUN_05628a78(param_1[0x45],
               *(undefined8 *)Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>__ctor__);
LAB_06abbbec:
  if (param_2 != 0) {
    FUN_06a82e3c(param_2,param_1[0x44],0);
    if (param_1[0x45] != 0) {
      FUN_05628758(param_1[0x45],param_2,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<DictationSession>_Invoke__);
      return 1;
    }
  }
LAB_06abbc38:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


