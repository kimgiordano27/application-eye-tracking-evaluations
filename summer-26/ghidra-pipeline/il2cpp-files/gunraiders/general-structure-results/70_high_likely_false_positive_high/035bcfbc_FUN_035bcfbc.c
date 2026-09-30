/*
FUNCTION_NAME: FUN_035bcfbc
ENTRY_POINT: 035bcfbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2
*/


undefined8 FUN_035bcfbc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_04537c8b & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Selectable>_AddListener__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Selectable>_Invoke__);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<float>__ctor__);
    DAT_04537c8b = 1;
  }
  puVar3 = Method_UnityEngine_Events_UnityEvent<Selectable>_AddListener__;
  puVar2 = GameAnalyticsSDK_State_GAState_TypeInfo;
  puVar1 = PTR_DAT_0422f958;
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar4 = thunk_FUN_01c495e4(*(long *)(param_1 + 0x48),
                                 *(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<Selectable>_AddListener__),
     lVar4 == 0)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar10 = *(long *)puVar1;
      plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      lVar4 = *(long *)(lVar10 + 0x38);
      if (lVar4 == 0) {
        FUN_01c723f0(lVar10);
        lVar4 = *(long *)(lVar10 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01c72394();
      }
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        lVar10 = *(long *)puVar2;
        uVar11 = **(undefined8 **)(lVar4 + 0xb8);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uVar12 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Selectable>_Invoke__;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar10) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_035bd1b0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar9,lVar10,1);
LAB_035bd1b0:
        (*(code *)*puVar5)(plVar9,4,uVar12,uVar11,puVar5[1]);
        return 0;
      }
    }
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
    lVar10 = *(long *)puVar1;
    plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar4 = *(long *)(lVar10 + 0x38);
    if (lVar4 == 0) {
      FUN_01c723f0(lVar10);
      lVar4 = *(long *)(lVar10 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar10 = *(long *)puVar2;
      uVar11 = **(undefined8 **)(lVar4 + 0xb8);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar12 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float>__ctor__;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_035bd1e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar9,lVar10,1);
LAB_035bd1e0:
      (*(code *)*puVar5)(plVar9,3,uVar12,uVar11,puVar5[1]);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      lVar4 = thunk_FUN_01c495e4(uVar11,*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        lVar10 = *(long *)puVar3;
        plVar9 = (long *)thunk_FUN_01c495e4(uVar11,lVar10);
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar10) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_035bd26c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar9,lVar10,0);
LAB_035bd26c:
        (*(code *)*puVar5)(plVar9,puVar5[1]);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


