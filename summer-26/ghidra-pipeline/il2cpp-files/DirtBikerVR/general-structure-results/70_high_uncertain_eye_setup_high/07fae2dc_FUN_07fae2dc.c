/*
FUNCTION_NAME: FUN_07fae2dc
ENTRY_POINT: 07fae2dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07fae414) */

void FUN_07fae2dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((DAT_0899b926 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>__ctor__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    DAT_0899b926 = 1;
  }
  uVar2 = FUN_07fae460(param_1,*(undefined8 *)(param_1 + 0x28),param_2,0);
  puVar1 = Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>__ctor__;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)FUN_053e3d98(*(undefined8 *)(param_1 + 0x28),
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                                 );
    FUN_04685138(param_1,plVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar1);
    FUN_07fae564(param_1,plVar3,param_2);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08488550) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07fae3f4;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08488550,0);
LAB_07fae3f4:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return;
}


