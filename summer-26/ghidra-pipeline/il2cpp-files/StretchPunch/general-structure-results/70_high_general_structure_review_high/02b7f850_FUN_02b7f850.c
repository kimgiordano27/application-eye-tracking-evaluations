/*
FUNCTION_NAME: FUN_02b7f850
ENTRY_POINT: 02b7f850
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


undefined8
FUN_02b7f850(long param_1,undefined8 param_2,undefined8 param_3,char param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_68;
  
                    /* try { // try from 02b7f884 to 02c7f887 has its CatchHandler @ 02b7f894 */
                    /* try { // try from 02b7f888 to 02c7f8b7 has its CatchHandler @ 02b7f44c */
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02b7f884 with catch @ 02b7f894
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02b7f7d4 with catch @ 02b7f898
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02b7f710 with catch @ 02b7f89c
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02b7f750 with catch @ 02b7f8a0
                        */
    FUN_02b7f770(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar12 = *(long **)(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 0x18);
  if (plVar12 == (long *)0x0) {
    local_68._0_4_ = (int)param_2;
    uVar3 = FUN_03390e48(&local_68,0);
    local_68 = CONCAT44(local_68._4_4_,(int)((ulong)param_2 >> 0x20));
    iVar2 = FUN_03390e48(&local_68,0);
    uVar3 = uVar3 ^ iVar2 << 2;
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
    }
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_02b7f954;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar12,lVar5,1);
LAB_02b7f954:
    uVar3 = (*(code *)*puVar4)(plVar12,param_2,puVar4[1]);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) goto LAB_02b7fcd8;
  uVar13 = *(uint *)(lVar5 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar2 = 0;
  if (uVar13 != 0) {
    iVar2 = (int)uVar3 / (int)uVar13;
  }
  uVar6 = uVar3 - iVar2 * uVar13;
  if (uVar13 <= uVar6) {
LAB_02b7fcd4:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  piVar15 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
  uVar13 = *piVar15 - 1;
  if (plVar12 == (long *)0x0) {
    if (lVar14 == 0) goto LAB_02b7fcd8;
    uVar8 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar13 < uVar6) {
      iVar2 = 0;
      do {
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0x18 + 0x20) == uVar3) {
          plVar12 = (long *)Unity_XR_CoreUtils_Collections_SerializableDictionary<object,_bool>__OnAfterDeserialize
                                      (*(undefined8 *)
                                        (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_02b7fcd4;
          if (plVar12 == (long *)0x0) goto LAB_02b7fcd8;
          uVar10 = (**(code **)(*plVar12 + 0x1b8))
                             (plVar12,*(undefined8 *)(lVar14 + lVar5 * 0x18 + 0x28),param_2,
                              *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar10 & 1) != 0) {
            if (param_4 == '\x02') goto LAB_02b7fcac;
            if (param_4 != '\x01') {
              return 0;
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_02b7fcd4;
            puVar4 = (undefined8 *)(lVar14 + lVar5 * 0x18 + 0x30);
            *puVar4 = param_3;
            goto FUN_02b7fca4;
          }
          uVar6 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar6 <= uVar13) goto LAB_02b7fcd4;
        uVar13 = *(uint *)(lVar14 + lVar5 * 0x18 + 0x24);
        if ((int)uVar6 <= iVar2) {
          FUN_033b37f8(0);
        }
        uVar8 = *(undefined8 *)(lVar14 + 0x18);
        iVar2 = iVar2 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar13 < uVar6);
    }
  }
  else {
    if (lVar14 == 0) goto LAB_02b7fcd8;
    uVar8 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar13 < uVar6) {
      iVar2 = 0;
      do {
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0x18 + 0x20) == uVar3) {
          lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
          uVar8 = *(undefined8 *)(lVar14 + lVar5 * 0x18 + 0x28);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01dde7f8(lVar7);
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto 
                System_Collections_Generic_List_Enumerator<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>__Dispose
                ;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01dde8fc(plVar12,lVar7,0);

          System_Collections_Generic_List_Enumerator<DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain>__Dispose
          :
          uVar10 = (*(code *)*puVar4)(plVar12,uVar8,param_2,puVar4[1]);
          if ((uVar10 & 1) != 0) {
            if (param_4 == '\x02') {
LAB_02b7fcac:
              local_68 = param_2;
              uVar8 = thunk_FUN_01de23e8(*(undefined8 *)
                                          (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),
                                         &local_68);
              FUN_033b36f4(uVar8,0);
              return 0;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              puVar4 = (undefined8 *)(lVar14 + lVar5 * 0x18 + 0x30);
              *puVar4 = param_3;
FUN_02b7fca4:
              thunk_FUN_01e10808(puVar4,param_3);
              return 1;
            }
            goto LAB_02b7fcd4;
          }
          uVar6 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar6 <= uVar13) goto LAB_02b7fcd4;
        uVar13 = *(uint *)(lVar14 + lVar5 * 0x18 + 0x24);
        if ((int)uVar6 <= iVar2) {
          FUN_033b37f8(0);
        }
        uVar8 = *(undefined8 *)(lVar14 + 0x18);
        iVar2 = iVar2 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar13 < uVar6);
    }
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar13 = *(uint *)(param_1 + 0x20);
    if (uVar13 == uVar6) {
      FUN_02b80074(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 400));
      lVar5 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
      if (lVar5 == 0) goto LAB_02b7fcd8;
      uVar6 = *(uint *)(lVar5 + 0x18);
      iVar2 = 0;
      if (uVar6 != 0) {
        iVar2 = (int)uVar3 / (int)uVar6;
      }
      uVar1 = uVar3 - iVar2 * uVar6;
      if (uVar6 <= uVar1) goto LAB_02b7fcd4;
      lVar14 = *(long *)(param_1 + 0x18);
      piVar15 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
    }
    if (lVar14 == 0) {
LAB_02b7fcd8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_02b7fcd4;
    lVar5 = (long)(int)uVar13;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar13 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_02b7fcd4;
    lVar5 = (long)(int)uVar13;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar14 + lVar5 * 0x18 + 0x24);
  }
  lVar14 = lVar14 + lVar5 * 0x18;
  *(uint *)(lVar14 + 0x20) = uVar3;
  iVar2 = *piVar15;
  *(undefined8 *)(lVar14 + 0x30) = param_3;
  *(undefined8 *)(lVar14 + 0x28) = param_2;
  *(int *)(lVar14 + 0x24) = iVar2 + -1;
  thunk_FUN_01e10808((undefined8 *)(lVar14 + 0x30),param_3);
  *piVar15 = uVar13 + 1;
  return 1;
}


