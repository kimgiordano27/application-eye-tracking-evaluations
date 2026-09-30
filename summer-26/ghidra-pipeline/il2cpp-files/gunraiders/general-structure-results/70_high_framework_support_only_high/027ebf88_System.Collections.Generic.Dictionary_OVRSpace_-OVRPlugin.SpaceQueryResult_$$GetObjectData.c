/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<OVRSpace,-OVRPlugin.SpaceQueryResult>$$GetObjectData
ENTRY_POINT: 027ebf88
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>__GetObjectData
          (undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  
  lVar1 = FUN_01c5d2fc(*param_1,1);
  if (lVar1 != 0) {
    if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_01c495e4(), lVar2 == 0)) {
      uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,0);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(long *)(lVar1 + 0x20) = unaff_x20;
    if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 027ebfcc to 028ebffb has its CatchHandler @ 027ec1b4 */
      plVar3 = (long *)(**(code **)(*unaff_x21 + 0x8f8))();
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x298))();
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 027ebffc to 028ec183 has its CatchHandler @ 027ebdbc */
          uVar5 = FUN_04021bf8(&UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_TypeInfo
                               ,*unaff_x24);
          return uVar5;
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01c72394();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
          FUN_01c72394();
        }
        uVar5 = thunk_FUN_01c496e0();
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01c72394(lVar1);
        }
        FUN_02f33ba0(uVar5,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


