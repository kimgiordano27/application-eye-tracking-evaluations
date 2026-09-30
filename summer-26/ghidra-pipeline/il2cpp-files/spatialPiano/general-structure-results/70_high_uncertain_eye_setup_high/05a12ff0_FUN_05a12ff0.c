/*
FUNCTION_NAME: FUN_05a12ff0
ENTRY_POINT: 05a12ff0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05a13498) */
/* WARNING: Removing unreachable block (ram,0x05a133ec) */

void FUN_05a12ff0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05a12fd4 with catch @ 05a13010
                        */
  if ((DAT_06bc2026 & 1) == 0) {
    FUN_02f08768(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__);
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
    FUN_02f08768(PTR_DAT_067c91b0);
                    /* try { // try from 05a1303c to 05b1303f has its CatchHandler @ 05a130bc */
                    /* try { // try from 05a13040 to 05b130ab has its CatchHandler @ 05a12fac */
    FUN_02f08768(PTR_DAT_067cc670);
    FUN_02f08768(PTR_DAT_067cc678);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                );
    FUN_02f08768(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                );
    FUN_02f08768(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
    FUN_02f08768(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    DAT_06bc2026 = 1;
  }
                    /* try { // try from 05a130ac to 05b130bb has its CatchHandler @ 05a130bc */
  lVar8 = thunk_FUN_02f16e88(0);
                    /* catch() { ... } // from try @ 05a1303c with catch @ 05a130bc
                       catch() { ... } // from try @ 05a130ac with catch @ 05a130bc */
  if ((lVar8 == 0) ||
     (lVar8 = FUN_05118e74(lVar8,0),
     puVar7 = 
     Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
     , puVar6 = 
       Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__,
     puVar5 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__,
     puVar4 = PTR_DAT_067cc678, puVar3 = PTR_DAT_067c9648, puVar2 = PTR_DAT_067c91b8, lVar8 == 0)) {
LAB_05a13494:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* try { // try from 05a130c0 to 05b130c3 has its CatchHandler @ 05a130cc */
                    /* try { // try from 05a130c4 to 05b130cf has its CatchHandler @ 05a12fac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05a130c0 with catch @ 05a130cc
                        */
  if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
    return;
  }
                    /* try { // try from 05a130d0 to 05b1313b has its CatchHandler @ 05a130d0
                       catch() { ... } // from try @ 05a130d0 with catch @ 05a130d0
                       catch() { ... } // from try @ 05a1321c with catch @ 05a130d0
                       catch() { ... } // from try @ 05a13230 with catch @ 05a130d0
                       catch() { ... } // from try @ 05a132c8 with catch @ 05a130d0
                       catch() { ... } // from try @ 05a13310 with catch @ 05a130d0
                       catch() { ... } // from try @ 05a1334c with catch @ 05a130d0
                       catch() { ... } // from try @ 05a133b8 with catch @ 05a130d0
                       catch() { ... } // from try @ 05a133f8 with catch @ 05a130d0 */
  uVar18 = 0;
  uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
LAB_05a13108:
  if (uVar12 <= uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  uVar9 = FUN_0501cb2c(*(undefined8 *)(lVar8 + uVar18 * 8 + 0x20),0);
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar13);
    lVar13 = *(long *)puVar5;
  }
  puVar14 = *(undefined8 **)(lVar13 + 0xb8);
  lVar16 = puVar14[2];
  if (lVar16 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar13);
      puVar14 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar17 = *puVar14;
    lVar16 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
    FUN_04e0200c(lVar16,uVar17,
                 *(undefined8 *)
                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar16;
  }
  plVar10 = (long *)FUN_033a774c(uVar9,lVar16,
                                 *(undefined8 *)
                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                );
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067cc670) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05a13210;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067cc670,0);
LAB_05a13210:
    plVar10 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar13 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar14 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05a1327c;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,0);
LAB_05a1327c:
      uVar12 = (*(code *)*puVar14)(plVar10,puVar14[1]);
      if ((uVar12 & 1) == 0) goto LAB_05a1336c;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar13 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05a132e0;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar4,0);
LAB_05a132e0:
      plVar11 = (long *)(*(code *)*puVar14)(plVar10,puVar14[1]);
      if (plVar11 == (long *)0x0) {
LAB_05a13404:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto LAB_05a13404;
      if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar13 = FUN_050ef6a8(plVar11[2],*(undefined8 *)puVar7,0x18,0);
      uVar9 = FUN_02f0880c(*(undefined8 *)puVar3,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_050163f0(lVar13,0,uVar9,0);
    } while( true );
  }
  goto LAB_05a13494;
LAB_05a1336c:
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05a133d4;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_05a133d4:
    (*(code *)*puVar14)(plVar10,puVar14[1]);
  }
  uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
  uVar18 = uVar18 + 1;
  if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar18) {
    return;
  }
  goto LAB_05a13108;
}


