/*
FUNCTION_NAME: FUN_0212c144
ENTRY_POINT: 0212c144
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0212c144(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((DAT_03781133 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f3218);
    thunk_FUN_00d48444(Method_System_Net_HttpWebRequest_set_Method__);
    DAT_03781133 = 1;
  }
  uVar8 = FUN_0212abf8(param_1);
  puVar5 = Method_System_Net_HttpWebRequest_set_Method__;
  puVar4 = PTR_DAT_033f3218;
  if ((uVar8 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar11 = thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo);
    FUN_017713a8(uVar10,uVar11,0);
    uVar11 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar11);
  }
  if (*param_1 != 0) {
    plVar9 = (long *)(*param_1 + 0x30);
    lVar12 = *plVar9;
    if (lVar12 != 0) {
      uVar2 = *(uint *)(param_1 + 2);
      if (*(uint *)(lVar12 + 0x18) <= uVar2) {
LAB_0212c290:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(uint *)(lVar12 + (long)(int)uVar2 * 0x58 + 0x58);
      FUN_010b2f10(plVar9,(long)(int)uVar2,*(undefined8 *)PTR_DAT_033f3218);
      if ((uVar1 >> 2 & 1) == 0) {
LAB_0212c238:
        if (*param_1 != 0) {
          lVar12 = param_1[1];
          uVar7 = FUN_010b4d70(*(undefined8 *)(*param_1 + 0x30),*(undefined8 *)puVar5);
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0xb4) = uVar7;
            if (*param_1 != 0) {
              FUN_0211cfd4(*param_1,0);
              lVar12 = *param_1;
              if (lVar12 != 0) {
                if (*(long *)(lVar12 + 0x50) != 0) {
                  *(undefined8 *)(*(long *)(lVar12 + 0x50) + 0x40) = *(undefined8 *)(lVar12 + 0x30);
                }
                return;
              }
            }
          }
        }
      }
      else {
        lVar12 = *param_1;
        while (lVar12 != 0) {
          lVar3 = param_1[2];
          iVar6 = FUN_010b4d70(*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)puVar5);
          if (iVar6 <= (int)lVar3) goto LAB_0212c238;
          if (*param_1 == 0) break;
          plVar9 = (long *)(*param_1 + 0x30);
          lVar12 = *plVar9;
          if (lVar12 == 0) break;
          uVar2 = *(uint *)(param_1 + 2);
          if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_0212c290;
          if ((*(byte *)(lVar12 + (long)(int)uVar2 * 0x58 + 0x58) >> 3 & 1) == 0) goto LAB_0212c238;
          FUN_010b2f10(plVar9,(long)(int)uVar2,*(undefined8 *)puVar4);
          lVar12 = *param_1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


