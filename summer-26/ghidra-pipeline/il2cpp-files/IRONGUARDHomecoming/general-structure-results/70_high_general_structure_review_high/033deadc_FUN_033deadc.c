/*
FUNCTION_NAME: FUN_033deadc
ENTRY_POINT: 033deadc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


long FUN_033deadc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar3 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if ((DAT_04832553 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_GetCustomAttributes__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_GetModuleVersionId__);
    DAT_04832553 = 1;
  }
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_0353e50c(lVar4,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = System_Threading_OSSpecificSynchronizationContext__Post(uVar8,param_2,0);
  uVar5 = FUN_033df1f0(uVar8,uVar8,0);
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)Method_System_Reflection_Module_GetModuleVersionId__;
    if (*(char *)(param_1 + 0x29) != '\0') {
      puVar1 = (undefined8 *)Method_System_Reflection_Module_GetCustomAttributes__;
    }
    lVar6 = FUN_034d18b8(uVar8,*puVar1,0);
    if (((lVar6 != 0) && (uVar5 = *(ulong *)(lVar6 + 0x18), uVar5 != 0)) && (0 < (int)uVar5)) {
      uVar9 = 0;
      lVar7 = lVar6;
      do {
        if ((uVar5 & 0xffffffff) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar8 = FUN_033df120(lVar7,*(undefined8 *)(lVar6 + 0x20 + uVar9 * 8));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar8,uVar8);
        }
        lVar7 = FUN_033d0cc8(lVar4);
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  return lVar4;
}


