/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_channel_t_clamping_dist_set
ENTRY_POINT: 078fc170
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_channel_t_clamping_dist_set
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  
  puVar8 = Unity_Properties_TypeConverter<object,_bool>_TypeInfo;
                    /* try { // try from 078fc1a4 to 079fc267 has its CatchHandler @ 078fc1a4
                       catch() { ... } // from try @ 078fc1a4 with catch @ 078fc1a4
                       catch() { ... } // from try @ 078fc458 with catch @ 078fc1a4
                       catch() { ... } // from try @ 078fc500 with catch @ 078fc1a4
                       catch() { ... } // from try @ 078fc564 with catch @ 078fc1a4
                       catch() { ... } // from try @ 078fc5f0 with catch @ 078fc1a4 */
  if ((DAT_08987bb3 & 1) == 0) {
    FUN_03a8a718(System_Action<TimeSpan>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_List<ISessionInfo>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<object,_byte>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<object,_bool>_TypeInfo);
    DAT_08987bb3 = 1;
  }
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar8);
  FUN_0679343c(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03afed3c((long *)(lVar2 + 0x10),param_1);
    uVar3 = FUN_065cd284(param_2,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_065cd284(param_3,0);
      puVar1 = Unity_Properties_TypeConverter<object,_byte>_TypeInfo;
      puVar8 = System_Collections_Generic_List<ISessionInfo>_TypeInfo;
      if ((uVar3 & 1) == 0) {
        plVar11 = *(long **)(param_1 + 0x38);
        if (plVar11 == (long *)0x0) {
          uVar6 = 0;
          uVar5 = 0;
        }
        else {
          lVar9 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_078fc29c;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_03ac43c4(plVar11,*(long *)
                                         System_Collections_Generic_List<ISessionInfo>_TypeInfo,0);
LAB_078fc29c:
          lVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          if (lVar9 == 0) {
            uVar5 = 0;
          }
          else {
            plVar11 = *(long **)(param_1 + 0x30);
            if (plVar11 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              lVar9 = *plVar11;
              uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)System_Action<TimeSpan>_TypeInfo) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_078fc320;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_03ac43c4(plVar11,*(long *)System_Action<TimeSpan>_TypeInfo,0);
LAB_078fc320:
              uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
            }
            uVar3 = FUN_065cc2f0(uVar5,param_3,0);
            uVar5 = param_3;
            if ((uVar3 & 1) == 0) {
              uVar5 = 0;
            }
          }
          plVar11 = *(long **)(param_1 + 0x38);
          if (plVar11 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            lVar9 = *plVar11;
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar8) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_078fc3b0;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)puVar8,0);
LAB_078fc3b0:
            uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          }
        }
        uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_07918110(uVar7,param_2,param_3,uVar6,uVar5,0);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = uVar7;
          thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x18),uVar7);
          FUN_078fc4a8(lVar2);
          return;
        }
        goto LAB_078fc420;
      }
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar5 = thunk_FUN_03ac74bc();
      puVar8 = 
      UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<VolumetricCloudsSystem_VolumetricCloudsAccumulationData,_RenderGraphContext>_TypeInfo
      ;
    }
    else {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar5 = thunk_FUN_03ac74bc();
      puVar8 = Unity_Properties_TypeConverter<object,_char>_TypeInfo;
    }
    uVar6 = thunk_FUN_03af1434(puVar8);
    uVar7 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
    FUN_066b7574(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar5,uVar6);
  }
LAB_078fc420:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


