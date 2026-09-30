/*
FUNCTION_NAME: FUN_0312d42c
ENTRY_POINT: 0312d42c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0312d7dc) */

undefined8 FUN_0312d42c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  
  puVar2 = System_Func<RequestFailedException,_bool>_TypeInfo;
  puVar1 = PTR_DAT_03cbe5e8;
                    /* try { // try from 0312d448 to 0322d457 has its CatchHandler @ 0312d458 */
                    /* catch() { ... } // from try @ 0312d3c8 with catch @ 0312d458
                       catch() { ... } // from try @ 0312d448 with catch @ 0312d458 */
  if ((DAT_0412bc08 & 1) == 0) {
                    /* try { // try from 0312d45c to 0322d45f has its CatchHandler @ 0312d468 */
                    /* try { // try from 0312d460 to 0322d46b has its CatchHandler @ 0312d294 */
    FUN_01ab69ac(System_Func<RequestFailedException,_bool>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312d45c with catch @ 0312d468
                        */
    FUN_01ab69ac(System_Func<Region,_string>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03ccc148);
    FUN_01ab69ac(PTR_DAT_03ccc150);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(System_Func<ResourceLocatorInfo,_bool>_TypeInfo);
    DAT_0412bc08 = 1;
  }
  uVar13 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar13 = FUN_0277b678(uVar13,0);
  plVar7 = (long *)FUN_031bdcf8(uVar13,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar10 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03ccc148) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0312d548;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03ccc148,0);
LAB_0312d548:
  puVar2 = PTR_DAT_03cbed08;
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = System_Func<ResourceLocatorInfo,_bool>_TypeInfo;
  puVar4 = PTR_DAT_03ccc150;
  puVar3 = PTR_DAT_03cbed20;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = (long *)0x0;
  do {
    plVar14 = plVar6;
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0312d5cc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar3,0);
LAB_0312d5cc:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_0312d758;
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_0312d730;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch3position;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar4,0);
UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch3position:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = FUN_02789a40(plVar9,0);
    plVar6 = plVar14;
    if (((uVar11 & 1) == 0) &&
       (uVar11 = (**(code **)(*plVar9 + 0x348))(plVar9,*(undefined8 *)(*plVar9 + 0x350)),
       (uVar11 & 1) == 0)) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_02786d28(plVar14,0,0);
      plVar6 = plVar9;
      if ((uVar11 & 1) == 0) {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = (**(code **)(*plVar14 + 0x388))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 0x390));
        if (((uVar11 & 1) == 0) &&
           (uVar11 = (**(code **)(*plVar9 + 0x388))(plVar9,plVar14,*(undefined8 *)(*plVar9 + 0x390))
           , plVar6 = plVar14, (uVar11 & 1) == 0)) {
          uVar15 = *(undefined8 *)puVar5;
          uVar13 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          FUN_025b1328(uVar15,uVar13,0);
          FUN_0311e174();
        }
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0312d74c;
    }
  }
LAB_0312d730:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_0312d74c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0312d758:
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_02787b20(plVar14,0,0);
  if ((uVar11 & 1) != 0) {
    uVar13 = FUN_0279a67c(plVar14,0);
    uVar13 = thunk_FUN_01a89d6c(uVar13,*(undefined8 *)System_Func<Region,_string>_TypeInfo);
    return uVar13;
  }
  return 0;
}


