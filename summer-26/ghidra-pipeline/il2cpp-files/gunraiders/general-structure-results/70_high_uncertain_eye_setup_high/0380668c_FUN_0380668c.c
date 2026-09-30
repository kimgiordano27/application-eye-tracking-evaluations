/*
FUNCTION_NAME: FUN_0380668c
ENTRY_POINT: 0380668c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0380668c(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
                    /* try { // try from 03806698 to 0390669b has its CatchHandler @ 038066ac */
                    /* catch() { ... } // from try @ 03806698 with catch @ 038066ac */
  if ((DAT_045390b4 & 1) == 0) {
                    /* try { // try from 038066b4 to 0390671b has its CatchHandler @ 03806730 */
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_OnKeyGenerated__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<AudioSource>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<CSG_Vertex>__);
    FUN_01c5d288(
                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
                );
    FUN_01c5d288(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__);
    DAT_045390b4 = 1;
  }
  puVar2 = Method_System_Linq_Enumerable_ToList<AudioSource>__;
  if (param_3 != (long *)0x0) {
    lVar7 = *param_3;
    bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<AudioSource>__ + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Linq_Enumerable_ToList<AudioSource>__)) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Security_Cryptography_DSACryptoServiceProvider_OnKeyGenerated__
                       + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Security_Cryptography_DSACryptoServiceProvider_OnKeyGenerated__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(param_3);
      }
      uVar3 = FUN_037f3430(param_3,0);
      *(undefined4 *)(param_1 + 0xf8) = uVar3;
    }
    else if (param_3[0x1c] != 0) {
      return param_3[0x1c];
    }
  }
  if (*(int *)(param_1 + 0xf8) == 1) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x20) == '\0') ||
     (plVar8 = *(long **)(param_1 + 0xa0), plVar8 == (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar7 = FUN_037cd004(*(long *)(param_1 + 0x28),param_2,0);
      return lVar7;
    }
  }
  else {
    lVar7 = *plVar8;
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
      bVar1 = *(byte *)(*(long *)Method_System_Linq_Enumerable_ToList<CSG_Vertex>__ + 0x130);
      if ((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_System_Linq_Enumerable_ToList<CSG_Vertex>__)) {
        lVar7 = plVar8[0xf];
        thunk_FUN_01c21c38();
        return lVar7;
      }
      FUN_03807e68(param_1,*(undefined8 *)
                            Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__
                   ,**(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8));
      return 0;
    }
    if (param_2 != (long *)0x0) {
      uVar4 = (**(code **)(*param_2 + 0x138))
                        (param_2,plVar8[0x18],*(undefined8 *)(*param_2 + 0x140));
      if ((uVar4 & 1) != 0) {
        return plVar8[0x1c];
      }
      uVar5 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      plVar8 = (long *)plVar8[0x18];
      if (plVar8 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        FUN_0380c6c4(param_1,*(undefined8 *)
                              Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
                     ,uVar5,uVar6);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


