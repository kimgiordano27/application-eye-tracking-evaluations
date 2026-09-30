/*
FUNCTION_NAME: FUN_0204b9fc
ENTRY_POINT: 0204b9fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_0204b9fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<float>__ctor__;
  if ((DAT_03780afc & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<string>_Reverse__);
    thunk_FUN_00d48444(StringLiteral_1000);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<SmackAJackClown>__);
    thunk_FUN_00d48444(StringLiteral_8530);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<float>__ctor__);
    DAT_03780afc = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_017b46ec(param_1,0);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_8530);
    *(long *)(param_1 + 0x10) = lVar5;
    puVar4 = StringLiteral_1000;
    puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_get_Count__;
    puVar2 = Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__;
    puVar1 = Method_System_Collections_Generic_List<string>_Reverse__;
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      FUN_01323390(*(long *)(param_2 + 0x10),&local_58,
                   *(undefined8 *)Method_System_Linq_Enumerable_ToList<SmackAJackClown>__);
      while( true ) {
        uVar6 = FUN_012b894c(&local_58,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          FUN_012b8948(&local_58,*(undefined8 *)puVar1);
          return;
        }
        plVar7 = (long *)FUN_00c540d0(&local_58,*(undefined8 *)puVar2);
        if (plVar7 == (long *)0x0) break;
        lVar5 = *(long *)(param_1 + 0x10);
        uVar8 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar8,uVar8);
        }
        FUN_00c541d8(lVar5,uVar8,*(undefined8 *)puVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


