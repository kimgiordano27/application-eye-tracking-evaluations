/*
FUNCTION_NAME: FUN_03fdb788
ENTRY_POINT: 03fdb788
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


uint FUN_03fdb788(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  undefined4 local_40 [2];
  ulong local_38;
  
  if ((DAT_0483bab8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_GetMethodBasedBinaryOperator__);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_01efb3a4(PTR_DAT_0457c510);
    thunk_FUN_01efb3a4(PTR_DAT_04581ae8);
    thunk_FUN_01efb3a4(PTR_DAT_04581a28);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_0483bab8 = 1;
  }
  local_40[0] = 0;
  if (param_2 == 0) goto LAB_03fdb93c;
  uVar5 = FUN_023351b4(param_2,*(undefined8 *)(param_1 + 0x98),
                       *(undefined8 *)
                        Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
  uVar6 = FUN_0340eec4(uVar5,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(param_1 + 0x90) == 2) {
      uVar7 = FUN_023351b4(param_2,*(undefined8 *)(param_1 + 0xa0),
                           *(undefined8 *)
                            Method_System_Linq_Expressions_Expression_GetMethodBasedBinaryOperator__
                          );
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
      }
      uVar6 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar7,0,0);
      if ((uVar6 & 1) != 0) goto LAB_03fdb940;
    }
    else {
      uVar7 = 0;
    }
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_03fdb93c;
    local_38 = FUN_03ed25a4(*(long *)(param_2 + 0x10),0);
    puVar2 = PTR_DAT_04581a28;
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 != 3) {
LAB_03fdb910:
      switch(iVar1) {
      case 0:
        lVar8 = *(long *)(param_2 + 0x28);
        break;
      case 1:
        lVar8 = FUN_03f88f74(*(undefined8 *)(param_2 + 0x10),0);
        break;
      case 2:
        lVar8 = FUN_03f8920c(uVar7,0);
        break;
      case 3:
        uVar4 = FUN_03332cb8(&local_38,*(undefined8 *)PTR_DAT_04581a28);
        local_48 = 0;
        FUN_03332ca0(&local_48,uVar4,*(undefined8 *)PTR_DAT_0457c510);
        lVar8 = thunk_FUN_03f880a4(local_48,0);
        break;
      case 4:
        lVar8 = thunk_FUN_03f862f0(0);
        break;
      case 5:
        lVar8 = thunk_FUN_03f87820(0);
        break;
      default:
        thunk_FUN_01efb3a4(PTR_DAT_04584580);
        uVar5 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04584588);
        thunk_FUN_02803030(uVar5,iVar1,uVar7);
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04584578);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,uVar7);
      }
      if (lVar8 == 0) {
LAB_03fdb93c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar8,uVar5,0);
      goto LAB_03fdb964;
    }
    if ((local_38 & 0xff) != 0) {
      local_40[0] = FUN_03332cb8(&local_38,*(undefined8 *)PTR_DAT_04581a28);
      uVar6 = FUN_040840e8(local_40,0);
      if ((uVar6 & 1) != 0) {
        local_40[0] = FUN_03332cb8(&local_38,*(undefined8 *)puVar2);
        uVar6 = FUN_04084160(local_40,0);
        if (((uVar6 & 1) != 0) && (uVar6 = FUN_03f89444(local_38,0), (uVar6 & 1) != 0)) {
          iVar1 = *(int *)(param_1 + 0x90);
          goto LAB_03fdb910;
        }
      }
    }
  }
LAB_03fdb940:
  uVar3 = 0;
LAB_03fdb964:
  return uVar3 & 1;
}


