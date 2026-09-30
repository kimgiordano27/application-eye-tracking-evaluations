/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.FieldFilter.<ExecuteFilter>d__2$$System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator
ENTRY_POINT: 0564f9ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_3
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_FieldFilter_<ExecuteFilter>d__2__System_Collections_Generic_IEnumerable<Newtonsoft_Json_Linq_JToken>_GetEnumerator
          (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  int in_w8;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = Newtonsoft_Json_Serialization_JsonProperty__get_DeclaringType
                    (*(undefined4 *)(unaff_x20 + 0x18),0x10,0);
  if ((unaff_x22 & 1) == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar8 = FUN_05619d34();
    if ((uVar8 & 1) != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (0 < (int)uVar1) {
        lVar5 = 0;
        do {
          if (uVar1 <= (uint)lVar5) goto LAB_05650098;
          if (*(long *)(unaff_x20 + 0x20 + lVar5 * 8) == 0) goto LAB_0564fff4;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar1);
      }
      uVar7 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d52de0);
      FUN_05624fa8();
      return uVar7;
    }
    lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03d00);
    FUN_03fd04d8(lVar6,uVar4,*(undefined8 *)PTR_DAT_06d53a80);
    puVar2 = PTR_DAT_06d15f58;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (0 < (int)uVar1) {
      lVar5 = 0;
      do {
        if (uVar1 <= (uint)lVar5) {
LAB_05650098:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        lVar13 = *(long *)(unaff_x20 + 0x20 + lVar5 * 8);
        if (lVar13 == 0) {
LAB_0564fff4:
          thunk_FUN_02f239f0(PTR_DAT_06d53a90);
          uVar7 = thunk_FUN_02ef1808();
          uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d53a98);
          FUN_0552dd14(uVar7,uVar10,0);
          uVar10 = thunk_FUN_02f239f0(PTR_DAT_06d53aa0);
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar7,uVar10);
        }
        FUN_02ebbee0(lVar13);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*unaff_x21);
        }
        uVar8 = FUN_0561ab0c();
        if ((uVar8 & 1) == 0) {
LAB_0564fdc0:
          if (lVar6 == 0) goto LAB_0564fc40;
          lVar14 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0564fc40;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar13;
            thunk_FUN_02f411dc(plVar9,lVar13);
          }
          else {
            FUN_03fd0c9c(lVar6,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (unaff_x19 == (long *)0x0) goto LAB_0564fc40;
          uVar8 = (**(code **)(*unaff_x19 + 0x298))();
          if ((uVar8 & 1) != 0) goto LAB_0564fdc0;
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)uVar1);
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar8 = FUN_05619d34();
    if ((uVar8 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_0564fc40;
      uVar8 = FUN_0561bef0();
      if ((uVar8 & 1) == 0) {
        if (lVar6 == 0) goto LAB_0564fc40;
        uVar7 = FUN_0562816c();
        uVar7 = thunk_FUN_02ef170c(uVar7,*(undefined8 *)PTR_DAT_06d02bd0);
        goto LAB_0564ffb8;
      }
    }
    if (lVar6 != 0) {
      uVar7 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d52de0,*(undefined4 *)(lVar6 + 0x18));
LAB_0564ffb8:
      FUN_03fd12b0(lVar6,uVar7,0,*(undefined8 *)PTR_DAT_06d53a78);
      return uVar7;
    }
  }
  else {
    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d53a70);
    FUN_04c73c78(lVar5,uVar4,*(undefined8 *)PTR_DAT_06d53a68);
    lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03d00);
    FUN_03fd04d8(lVar6,uVar4,*(undefined8 *)PTR_DAT_06d53a80);
    puVar2 = PTR_DAT_06d53a60;
    iVar16 = 0;
    do {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (0 < (int)uVar1) {
        uVar15 = 0;
        do {
          if (uVar1 <= uVar15) goto LAB_05650098;
          lVar13 = *(long *)(unaff_x20 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_0564fff4;
          uVar7 = FUN_02ebbee0(lVar13);
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*unaff_x21);
          }
          uVar8 = FUN_0561ab0c();
          if ((uVar8 & 1) == 0) {
Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter__ExecuteFilter:
            if (lVar5 == 0) goto LAB_0564fc40;
            uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                              (lVar5,uVar7,&stack0x00000008,*(undefined8 *)puVar2);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_06d4cfc0 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              lVar14 = FUN_0565046c(uVar7);
              if (iVar16 != 0) goto LAB_0564fb00;
LAB_0564fad0:
              if (lVar14 == 0) goto LAB_0564fc40;
LAB_0564fb0c:
              if (((*(char *)(lVar14 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
                 (*(int *)(in_stack_00000008 + 0x18) == iVar16)) {
                if (lVar6 == 0) goto LAB_0564fc40;
                lVar11 = *(long *)(lVar6 + 0x10);
                lVar12 = *(long *)PTR_DAT_06d15f58;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_0564fc40;
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar13;
                  thunk_FUN_02f411dc(plVar9,lVar13);
                }
                else {
                  FUN_03fd0c9c(lVar6,lVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else {
              if (in_stack_00000008 == 0) goto LAB_0564fc40;
              lVar14 = *(long *)(in_stack_00000008 + 0x10);
              if (iVar16 == 0) goto LAB_0564fad0;
LAB_0564fb00:
              if (lVar14 == 0) goto LAB_0564fc40;
              if (*(char *)(lVar14 + 0x15) != '\0') goto LAB_0564fb0c;
            }
            if (in_stack_00000008 == 0) {
              lVar13 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d53a50);
              *(long *)(lVar13 + 0x10) = lVar14;
              thunk_FUN_02f411dc((long *)(lVar13 + 0x10),lVar14);
              *(int *)(lVar13 + 0x18) = iVar16;
              FUN_04c7462c(lVar5,uVar7,lVar13,*(undefined8 *)PTR_DAT_06d53a58);
            }
          }
          else {
            if (unaff_x19 == (long *)0x0) goto LAB_0564fc40;
            uVar8 = (**(code **)(*unaff_x19 + 0x298))();
            if ((uVar8 & 1) != 0)
            goto Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter__ExecuteFilter;
          }
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar1);
      }
      puVar3 = PTR_DAT_06d4cfc0;
      if (*(int *)(*(long *)PTR_DAT_06d4cfc0 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      unaff_x23 = FUN_056500a8(unaff_x23);
      if (unaff_x23 == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_05619d34();
        if ((uVar8 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) break;
          uVar8 = FUN_0561bef0();
          if ((uVar8 & 1) == 0) {
            if (lVar6 != 0) {
              uVar7 = FUN_0562816c();
              uVar7 = thunk_FUN_02ef170c(uVar7,*(undefined8 *)PTR_DAT_06d02bd0);
              goto LAB_0564ffb8;
            }
            break;
          }
        }
        if (lVar6 != 0) {
          uVar7 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d52de0,*(undefined4 *)(lVar6 + 0x18));
          goto LAB_0564ffb8;
        }
        break;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      iVar16 = iVar16 + 1;
      unaff_x20 = FUN_0564f52c(unaff_x23);
    } while (unaff_x20 != 0);
  }
LAB_0564fc40:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


