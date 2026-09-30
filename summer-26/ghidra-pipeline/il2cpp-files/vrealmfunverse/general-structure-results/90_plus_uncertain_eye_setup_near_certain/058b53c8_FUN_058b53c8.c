/*
FUNCTION_NAME: FUN_058b53c8
ENTRY_POINT: 058b53c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058b53c8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  
  puVar2 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
  if ((DAT_066d322a & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__);
    FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    FUN_02b3c81c(Method_OVRPlugin_PinnedArray<Guid>_Dispose__);
    FUN_02b3c81c(PTR_DAT_06317a98);
    FUN_02b3c81c(PTR_DAT_063151a0);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var);
    DAT_066d322a = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),param_2);
  lVar4 = FUN_03197dbc(param_1,*(undefined8 *)puVar2);
  plVar10 = (long *)(param_1 + 0x70);
  *plVar10 = lVar4;
  thunk_FUN_02bb0e9c(plVar10,lVar4);
  uVar5 = FUN_03172a30(param_1,*(undefined8 *)
                                Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78),uVar5);
  if ((*plVar10 != 0) && (plVar6 = *(long **)(param_1 + 0x60), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x5e8))
              (plVar6,*(undefined8 *)(*plVar10 + 0x30),*(undefined8 *)(*plVar6 + 0x5f0));
    puVar3 = Unity_XR_CoreUtils_ScriptableSettingsPathAttribute_var;
    puVar2 = PTR_DAT_06317a98;
    if (*plVar10 != 0) {
      lVar4 = *(long *)(*plVar10 + 0x78);
      if (lVar4 != 0) {
        uVar9 = *(ulong *)(lVar4 + 0x18);
        iVar8 = (int)uVar9;
        if (0 < iVar8) {
          uVar12 = 0;
          do {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_058b5730;
            uVar5 = FUN_05c89410(*(long *)(param_1 + 0x60),0);
            lVar4 = FUN_03172a30(param_1,*(undefined8 *)
                                          Method_UnityEngine_Pool_ObjectPool<RenderTree>_Release__);
            if (lVar4 == 0) goto LAB_058b5730;
            uVar11 = *(undefined8 *)(lVar4 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            lVar4 = FUN_032404a4(uVar5,uVar11,*(undefined8 *)PTR_DAT_063151a0);
            if ((lVar4 == 0) ||
               (plVar6 = (long *)FUN_031d8020(lVar4,*(undefined8 *)
                                                     Method_OVRPlugin_PinnedArray<Guid>_Dispose__),
               plVar6 == (long *)0x0)) goto LAB_058b5730;
            (**(code **)(*plVar6 + 0x2f8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x300));
            plVar6 = (long *)FUN_05c8c8e0(lVar4,0);
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_058b5730;
            plVar7 = (long *)FUN_05c89340(*(long *)(param_1 + 0x60),0);
            if (plVar7 == (long *)0x0) {
              plVar7 = (long *)0x0;
            }
            else if (*plVar7 != *(long *)puVar3) {
              plVar7 = (long *)0x0;
            }
            if ((plVar6 == (long *)0x0) || (*plVar6 != *(long *)puVar3)) goto LAB_058b5730;
            FUN_05c9ace8(0,0x3f800000,plVar6,0);
            FUN_05c9ae7c(0,0x3f800000,plVar6,0);
            FUN_05c9b1a4(0x42c80000,0x41d00000,plVar6,0);
            if (plVar7 == (long *)0x0) goto LAB_058b5730;
            fVar13 = (float)FUN_05c9af44(plVar7,0);
            uVar1 = uVar12 + 1;
            FUN_05c9b010((230.0 / (float)iVar8) * (float)(int)uVar1 + 215.0 + fVar13,plVar6,0);
            FUN_05c9b338(0,0x3f000000,plVar6,0);
            FUN_05c9c1fc(0,0,0x41500000,plVar6,0);
            plVar6 = (long *)FUN_031d80b0(lVar4,*(undefined8 *)puVar2);
            if (plVar6 == (long *)0x0) goto LAB_058b5730;
            FUN_05f8ffb8(plVar6,0xf,0);
            if ((*plVar10 == 0) || (lVar4 = *(long *)(*plVar10 + 0x78), lVar4 == 0))
            goto LAB_058b5730;
            if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            (**(code **)(*plVar6 + 0x5e8))
                      (plVar6,*(undefined8 *)(lVar4 + uVar12 * 8 + 0x20),
                       *(undefined8 *)(*plVar6 + 0x5f0));
            uVar12 = uVar1;
          } while ((uVar9 & 0xffffffff) != uVar1);
        }
      }
      FUN_058b5738(param_1);
      return;
    }
  }
LAB_058b5730:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


