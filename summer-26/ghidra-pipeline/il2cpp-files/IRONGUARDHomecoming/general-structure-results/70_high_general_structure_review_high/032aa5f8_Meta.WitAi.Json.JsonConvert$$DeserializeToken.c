/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeToken
ENTRY_POINT: 032aa5f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert__DeserializeToken
               (undefined8 param_1,undefined8 param_2,void *param_3,long param_4)

{
  void *__src;
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *__dest;
  ulong __n;
  long unaff_x26;
  long lVar10;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  bVar4 = DAT_04831e1c;
  *(void **)(unaff_x29 + -0x18) = param_3;
  if ((bVar4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<Substring,_string>__);
    DAT_04831e1c = 1;
  }
  puVar2 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x90);
  uVar8 = *(uint *)(lVar5 + 0xfc);
  __n = (ulong)uVar8;
                    /* try { // try from 032aa654 to 033aa693 has its CatchHandler @ 032aa654
                       catch() { ... } // from try @ 032aa654 with catch @ 032aa654
                       catch() { ... } // from try @ 032aa6a8 with catch @ 032aa654
                       catch() { ... } // from try @ 032aa6e4 with catch @ 032aa654
                       catch() { ... } // from try @ 032aa724 with catch @ 032aa654 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
    uVar8 = *(uint *)(lVar5 + 0xfc);
  }
  puVar3 = Method_System_Linq_Enumerable_Select<Substring,_string>__;
  lVar5 = (long)&stack0x00000000 - ((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0);
  __dest = (undefined8 *)(lVar5 - (__n + 0xf & 0x1fffffff0));
                    /* try { // try from 032aa694 to 033aa6a7 has its CatchHandler @ 032aa6b4 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 032aa6a8 to 033aa6cb has its CatchHandler @ 032aa654 */
  lVar6 = FUN_03ec8718(*(undefined8 *)puVar3,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032aa694 with catch @ 032aa6b4
                        */
  lVar10 = *(long *)(param_4 + 0x20);
                    /* try { // try from 032aa6cc to 033aa6e3 has its CatchHandler @ 032aa71c */
  __src = param_3;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x90) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x18);
  }
  memcpy(__dest,__src,__n);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 032aa6e4 to 033aa70b has its CatchHandler @ 032aa654 */
  lVar10 = *(long *)(lVar10 + 0xc0);
  puVar1 = *(undefined8 **)(lVar10 + 0x98);
  uVar7 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar10 + 0x90) + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  *(undefined8 **)(unaff_x29 + -0x10) = __dest;
                    /* try { // try from 032aa70c to 033aa71b has its CatchHandler @ 032aa71c */
  (*(code *)puVar1[2])(uVar7,puVar1,lVar6,unaff_x29 + -0x10,__dest);
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
                    /* catch() { ... } // from try @ 032aa6cc with catch @ 032aa71c
                       catch() { ... } // from try @ 032aa70c with catch @ 032aa71c */
  lVar10 = *(long *)(lVar9 + 0x90);
                    /* try { // try from 032aa720 to 033aa723 has its CatchHandler @ 032aa72c */
                    /* try { // try from 032aa724 to 033aa72f has its CatchHandler @ 032aa654 */
  lVar6 = lVar10;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032aa720 with catch @ 032aa72c
                        */
    lVar10 = FUN_01ecaf44(lVar10);
    param_3 = *(void **)(unaff_x29 + -0x18);
    lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    lVar6 = *(long *)(lVar9 + 0x90);
  }
  if (-1 < *(int *)(lVar6 + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x18);
  }
  FUN_01f09244(lVar10,*(undefined8 *)(lVar9 + 0xa0),lVar5,param_3,0,unaff_x29 + -0x10);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88))
            (param_2,*(undefined8 *)(unaff_x29 + -0x10),1);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


