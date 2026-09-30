/*
FUNCTION_NAME: FUN_034084a8
ENTRY_POINT: 034084a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_8;telemetry_or_network_hits_1
*/


float FUN_034084a8(float param_1,undefined8 param_2,float param_3,long param_4,float *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_60 [4];
  long local_48;
  
  if ((DAT_0412d558 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_01ab69ac(System_Net_Sockets_MulticastOption_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(
                Unity_Physics_Systems_ColliderBlobCleanupSystem___codegen__OnCreate_00000A99_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc1510);
    FUN_01ab69ac(UnityEngine_UIElements_PanelEventHandler_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_PanelSettings_TypeInfo);
    DAT_0412d558 = 1;
  }
  puVar3 = UnityEngine_UIElements_PanelEventHandler_TypeInfo;
  puVar2 = PTR_DAT_03cbe438;
  local_48 = 0;
  if ((int)param_3 < 0) {
LAB_03408590:
    local_60[0] = param_3;
    uVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,local_60);
    uVar5 = FUN_025b4d3c(*(undefined8 *)puVar3,uVar5,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
    }
    FUN_036772fc(uVar5,0);
    if (DAT_0411f1e1 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbeb00);
      DAT_0411f1e1 = '\x01';
    }
    return **(float **)(*(long *)PTR_DAT_03cbeb00 + 0xb8);
  }
  if (*(long *)(param_4 + 0x38) == 0) goto LAB_03408850;
  if (*(int *)(*(long *)(param_4 + 0x38) + 0x18) <= (int)param_3) goto LAB_03408590;
  iVar4 = FUN_03701768(param_2,0);
  if (iVar4 == 1) {
    fVar10 = 2.0 / *param_5;
  }
  else {
    iVar4 = FUN_03701768(param_2,0);
    if (iVar4 == 0) {
      fVar10 = (float)FUN_037017a0(param_2,0);
      fVar10 = fVar10 * 0.5 * DAT_00d38a10;
    }
    else {
      iVar4 = FUN_03701768(param_2,0);
      if (iVar4 != 2) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_036772fc(*(undefined8 *)UnityEngine_UIElements_PanelSettings_TypeInfo,0);
        fVar10 = 0.0;
        goto LAB_03408730;
      }
      lVar6 = FUN_037016dc(param_2,0);
      if (lVar6 == 0) goto LAB_03408850;
      iVar4 = FUN_036a03ac(lVar6,0);
      if (*(int *)(*(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
      }
      iVar1 = -0x80000000;
      if (param_1 != INFINITY) {
        iVar1 = (int)param_1;
      }
      fVar10 = (float)FUN_0342cb28(iVar1,iVar4 == 2,0);
      fVar10 = (fVar10 + 90.0) * 0.5 * DAT_00d38a10;
    }
    fVar10 = tanf(fVar10);
    fVar8 = (float)FUN_03701798(param_2,0);
    fVar10 = fVar10 * fVar8;
  }
LAB_03408730:
  puVar2 = PTR_DAT_03cc1510;
  if (*(long *)(param_4 + 0x38) != 0) {
    FUN_02215a88(*(long *)(param_4 + 0x38),param_3,local_60,*(undefined8 *)PTR_DAT_03cc1510);
    if (*(long *)(param_4 + 0x38) != 0) {
      fVar10 = (fVar10 / param_1) * -local_60[0];
      FUN_02215a88(*(long *)(param_4 + 0x38),param_3,local_60,*(undefined8 *)puVar2);
      FUN_03701768(param_2,0);
      if (*(char *)(param_4 + 0x2c) == '\0') {
        return fVar10;
      }
      lVar6 = FUN_037016dc(param_2,0);
      if (lVar6 != 0) {
        iVar4 = FUN_036a03ac(lVar6,0);
        if (iVar4 != 2) {
          return fVar10;
        }
        lVar6 = FUN_037016dc(param_2,0);
        if (lVar6 != 0) {
          uVar7 = FUN_01f4a16c(lVar6,&local_48,
                               *(undefined8 *)System_Net_Sockets_MulticastOption_TypeInfo);
          fVar8 = 2.5;
          if ((uVar7 & 1) != 0) {
            if (local_48 == 0) goto LAB_03408850;
            fVar9 = 3.5;
            if (*(int *)(local_48 + 0x58) != 3) {
              fVar9 = 2.5;
            }
            fVar8 = 1.5;
            if (*(int *)(local_48 + 0x58) != 1) {
              fVar8 = fVar9;
            }
          }
          return fVar10 * fVar8;
        }
      }
    }
  }
LAB_03408850:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


