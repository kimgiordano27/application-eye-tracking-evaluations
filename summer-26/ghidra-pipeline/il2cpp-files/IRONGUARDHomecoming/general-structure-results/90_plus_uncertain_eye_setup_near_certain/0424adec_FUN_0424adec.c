/*
FUNCTION_NAME: FUN_0424adec
ENTRY_POINT: 0424adec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0424b030) */

void FUN_0424adec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if ((DAT_0484135e & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04591d68);
    thunk_FUN_01efb3a4(PTR_DAT_04591d70);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ElementAt<string>__);
    DAT_0484135e = 1;
  }
  uVar1 = FUN_0340e600(param_1[0x7c],param_2,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_04224ea4(param_1,0);
    if (lVar2 == 0) {
      lVar2 = *param_1;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<string>__)
          {
            puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0424b014;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(param_1,*(long *)Method_System_Linq_Enumerable_ElementAt<string>__,2);
LAB_0424b014:
                    /* WARNING: Could not recover jumptable at 0x0424b028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(param_1,param_2,puVar5[1]);
      return;
    }
    uVar3 = (**(code **)(*param_1 + 0xb28))(param_1,*(undefined8 *)(*param_1 + 0xb30));
    if (*(int *)(*(long *)PTR_DAT_04591d70 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)PTR_DAT_04591d70);
    }
    plVar4 = (long *)FUN_029e5dc8(uVar3,param_2,*(undefined8 *)PTR_DAT_04591d68);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar4,param_1,0);
    lVar2 = *param_1;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<string>__) {
          puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0424af68;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)Method_System_Linq_Enumerable_ElementAt<string>__,2);
LAB_0424af68:
    (*(code *)*puVar5)(param_1,param_2,puVar5[1]);
    (**(code **)(*param_1 + 0x198))(param_1,plVar4,*(undefined8 *)(*param_1 + 0x1a0));
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0424afe8;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0424afe8:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  return;
}


