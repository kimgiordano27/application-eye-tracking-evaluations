/*
FUNCTION_NAME: FUN_035bcd5c
ENTRY_POINT: 035bcd5c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8 FUN_035bcd5c(long param_1,byte param_2,byte param_3,byte param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  
  param_2 = param_2 & 1;
  if ((DAT_04537c8a & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Selectable>__ctor__);
    DAT_04537c8a = 1;
  }
  param_3 = param_3 & 1;
  param_4 = param_4 & 1;
  if (((*(byte *)(param_1 + 0xa8) == param_2) && (*(byte *)(param_1 + 0xa9) == param_3)) &&
     (*(byte *)(param_1 + 0xaa) == param_4)) {
    return 0;
  }
  *(byte *)(param_1 + 0xa8) = param_2;
  *(byte *)(param_1 + 0xa9) = param_3;
  *(byte *)(param_1 + 0xaa) = param_4;
  puVar1 = PTR_DAT_0422fa08;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    plVar2 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,3);
    local_44[0] = param_2;
    lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_44);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_035bcfb0:
        uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar9,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar3;
        local_48[0] = param_3;
        lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_48);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_035bcfb0;
        if (1 < *(uint *)(plVar2 + 3)) {
          plVar2[5] = lVar3;
          local_4c[0] = param_4;
          lVar3 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_4c);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_035bcfb0;
          if (2 < *(uint *)(plVar2 + 3)) {
            plVar2[6] = lVar3;
            if (plVar8 != (long *)0x0) {
              lVar3 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
              uVar9 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Selectable>__ctor__;
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_035bcf4c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_01c72498(plVar8,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035bcf4c:
              (*(code *)*puVar5)(plVar8,3,uVar9,plVar2,puVar5[1]);
              if ((*(int *)(param_1 + 0x78) == 0) &&
                 (uVar9 = FUN_035b9390(param_1), (int)uVar9 == 1)) {
                if (*(char *)(param_1 + 0x89) == '\0') {
                  return uVar9;
                }
                *(undefined4 *)(param_1 + 0xdc) = 1;
                return uVar9;
              }
              return 1;
            }
            goto LAB_035bcfac;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
  }
LAB_035bcfac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


