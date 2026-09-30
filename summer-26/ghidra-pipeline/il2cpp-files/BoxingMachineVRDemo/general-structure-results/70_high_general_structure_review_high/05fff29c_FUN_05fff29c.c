/*
FUNCTION_NAME: FUN_05fff29c
ENTRY_POINT: 05fff29c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05fff534) */
/* WARNING: Removing unreachable block (ram,0x05fff538) */
/* WARNING: Removing unreachable block (ram,0x05fff584) */

undefined8 FUN_05fff29c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = Method_System_Net_HttpWebRequest_BeginGetResponse__;
  if ((DAT_06b855ae & 1) == 0) {
    FUN_02d6084c(Method_System_Net_HttpWebRequest_BeginGetResponse__);
    FUN_02d6084c(PTR_DAT_067679b0);
    FUN_02d6084c(Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractable>_get_Item__
                );
    FUN_02d6084c(Method_System_Collections_Generic_HashSet<IXRInteractable>__ctor__);
    FUN_02d6084c(PTR_DAT_06762d68);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Net_HttpWebRequest_CheckRequestStarted__);
    FUN_02d6084c(Method_System_Net_HttpWebRequest_EndGetResponse__);
    FUN_02d6084c(Method_System_Net_HttpWebRequest_GetObjectData__);
    DAT_06b855ae = 1;
  }
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
    plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067679b0);
    uVar6 = *(undefined8 *)Method_System_Net_HttpWebRequest_EndGetResponse__;
    FUN_0504920c(plVar4,0);
    FUN_05ffd714(plVar4,uVar6);
    puVar1 = PTR_DAT_06762d68;
    lVar11 = *(long *)PTR_DAT_06762d68;
    lVar8 = *(long *)(lVar11 + 0x38);
    if (lVar8 == 0) {
      FUN_02d9a33c(lVar11);
      lVar8 = *(long *)(lVar11 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d9a2e0();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = FUN_032c8fb4(plVar4,*(undefined8 *)
                                 Method_System_Net_HttpWebRequest_CheckRequestStarted__,
                         **(undefined8 **)(lVar8 + 0xb8),
                         *(undefined8 *)
                          Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRSelectInteractable>_get_Item__
                        );
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
    thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    lVar12 = *(long *)puVar1;
    lVar8 = *(long *)(lVar12 + 0x38);
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar8 == 0) {
      FUN_02d9a33c(lVar12);
      lVar8 = *(long *)(lVar12 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d9a2e0();
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    bVar3 = FUN_032c858c(lVar11,*(undefined8 *)Method_System_Net_HttpWebRequest_GetObjectData__,
                         **(undefined8 **)(lVar8 + 0xb8),
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet<IXRInteractable>__ctor__);
    *(byte *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = bVar3 & 1;
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05fff51c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05fff51c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (*(char *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1) == '\0') {
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
  uVar6 = thunk_FUN_02d9d534();
  uVar7 = thunk_FUN_02dc61f4(Method_System_Net_HttpWebRequest_GetResponse__);
  FUN_05007004(uVar6,uVar7,0);
  uVar7 = thunk_FUN_02dc61f4(Method_System_Net_HttpWebRequest_MyGetResponseAsync__);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar6,uVar7);
}


