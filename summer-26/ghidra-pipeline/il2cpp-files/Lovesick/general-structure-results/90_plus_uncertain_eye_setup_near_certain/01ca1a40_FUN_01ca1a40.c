/*
FUNCTION_NAME: FUN_01ca1a40
ENTRY_POINT: 01ca1a40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01ca1a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 local_48;
  
  puVar2 = Method_System_Collections_Generic_List<RaycastResult>__ctor__;
                    /* try { // try from 01ca1a64 to 01da1a67 has its CatchHandler @ 01ca1a70 */
                    /* try { // try from 01ca1a68 to 01da1a6b has its CatchHandler @ 01ca1a78 */
                    /* try { // try from 01ca1a6c to 01da1a6f has its CatchHandler @ 01ca1a74 */
  if ((DAT_0377ed31 & 1) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ca1a64 with catch @ 01ca1a70
                       try { // try from 01ca1a70 to 01da1a8f has its CatchHandler @ 01ca1910 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ca1a00 with catch @ 01ca1a74
                       catch(type#1 @ 03274860) { ... } // from try @ 01ca1a6c with catch @ 01ca1a74
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ca19dc with catch @ 01ca1a78
                       catch(type#1 @ 03274860) { ... } // from try @ 01ca1a68 with catch @ 01ca1a78
                        */
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
                    /* try { // try from 01ca1a90 to 01da1aa7 has its CatchHandler @ 01ca1b34 */
    thunk_FUN_00d48444(System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RaycastResult>__ctor__);
                    /* try { // try from 01ca1aa8 to 01da1b23 has its CatchHandler @ 01ca1910 */
    thunk_FUN_00d48444(OVR_OpenVR_ETextureType_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5518);
    DAT_0377ed31 = 1;
  }
  puVar3 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__;
  local_48 = 0;
  plVar6 = (long *)thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar2);
  if ((plVar6 == (long *)0x0) &&
     (plVar6 = (long *)FUN_010c06e0(param_2,*(undefined8 *)puVar3), plVar6 == (long *)0x0)) {
LAB_01ca22e4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *plVar6;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo) {
                    /* try { // try from 01ca1b3c to 01da1b47 has its CatchHandler @ 01ca1910 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01ca1b38 with catch @ 01ca1b44
                        */
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01ca1b48;
      }
      uVar14 = uVar14 - 1;
                    /* try { // try from 01ca1b24 to 01da1b33 has its CatchHandler @ 01ca1b34 */
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
                    /* catch() { ... } // from try @ 01ca1a90 with catch @ 01ca1b34
                       catch() { ... } // from try @ 01ca1b24 with catch @ 01ca1b34 */
  puVar7 = (undefined8 *)
           FUN_00d59724(plVar6,*(long *)
                                System_Collections_Generic_IReadOnlyList<ICylinderClipper>_TypeInfo,
                        0);
                    /* try { // try from 01ca1b38 to 01da1b3b has its CatchHandler @ 01ca1b44 */
LAB_01ca1b48:
  puVar1 = 
  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
  ;
  uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = StringLiteral_5518;
  switch(uVar5) {
  case 0:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar13 = FUN_01ca0e3c(param_1);
    break;
  case 1:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca20bc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca20bc:
    uVar9 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01c92418(param_1,uVar9);
    break;
  case 2:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    /* try { // try from 01ca1f04 to 01da1f07 has its CatchHandler @ 01ca2134 */
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1f08;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1f08:
    uVar9 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1fc8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1fc8:
    uVar8 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca1168(param_1,uVar9,uVar8);
    break;
  case 3:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1f68;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1f68:
    uVar9 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca2010;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca2010:
    uVar8 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca2070;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca2070:
    uVar10 = (*(code *)*puVar7)(plVar6,2,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca1320(param_1,uVar9,uVar8,uVar10);
    break;
  case 4:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1d98;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1d98:
    uVar9 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1df8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1df8:
    uVar8 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1e58;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1e58:
    uVar10 = (*(code *)*puVar7)(plVar6,2,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca1eb8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
                    /* try { // try from 01ca1e9c to 01da1ea3 has its CatchHandler @ 01ca2128 */
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca1eb8:
    uVar11 = (*(code *)*puVar7)(plVar6,3,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca1528(param_1,uVar9,uVar8,uVar10,uVar11);
    break;
  case 5:
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca2100;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca2100:
    uVar9 = (*(code *)*puVar7)(plVar6,0,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca2160;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca2160:
    uVar8 = (*(code *)*puVar7)(plVar6,1,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca21c0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca21c0:
    uVar10 = (*(code *)*puVar7)(plVar6,2,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca2220;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca2220:
    uVar11 = (*(code *)*puVar7)(plVar6,3,puVar7[1]);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ca2280;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_01ca2280:
    uVar12 = (*(code *)*puVar7)(plVar6,4,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    lVar13 = FUN_01ca1788(param_1,uVar9,uVar8,uVar10,uVar11,uVar12);
    break;
  default:
    FUN_01d043a0(param_1,*(undefined8 *)StringLiteral_5518,0);
    local_48 = FUN_010c06e0(plVar6,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    plVar6 = (long *)FUN_01ca0f44(param_1);
    FUN_01d038c4(plVar6,0x11,&local_48,*(undefined8 *)puVar4,0);
    uVar9 = local_48;
    puVar2 = OVR_OpenVR_ETextureType_TypeInfo;
    if (plVar6 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
                    /* try { // try from 01ca1d64 to 01da1e9b has its CatchHandler @ 01ca1d64
                       catch() { ... } // from try @ 01ca1d64 with catch @ 01ca1d64
                       catch() { ... } // from try @ 01ca20f4 with catch @ 01ca1d64
                       catch() { ... } // from try @ 01ca2164 with catch @ 01ca1d64
                       catch() { ... } // from try @ 01ca2228 with catch @ 01ca1d64
                       catch() { ... } // from try @ 01ca2240 with catch @ 01ca1d64 */
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar13 != 0) {
        FUN_01cb7b8c(lVar13,param_1,uVar9,uVar8,0);
        return lVar13;
      }
    }
    goto LAB_01ca22e4;
  }
  return lVar13;
}


